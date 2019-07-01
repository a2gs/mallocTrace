#/* Andre Augusto Giannotti Scota (a2gs)
# * andre.scota@gmail.com
# */


#/* makefile
# *
# *  Who     | When       | What
# *  --------+------------+----------------------------
# *   a2gs   | 30/06/2019 | Creation
# *          |            |
# */

# C flags:
CFLAGS_OPTIMIZATION = -g
#CFLAGS_OPTIMIZATION = -O3
CFLAGS_VERSION = -std=c11
CFLAGS_WARNINGS = -Wall -Wextra -Wno-unused-parameter -Wno-unused-but-set-parameter
CFLAGS_DEFINES = -D_XOPEN_SOURCE=700 -D_POSIX_C_SOURCE=200809L -D_POSIX_SOURCE=1 -D_DEFAULT_SOURCE=1 -D_GNU_SOURCE=1
CFLAGS = $(CFLAGS_OPTIMIZATION) $(CFLAGS_VERSION) $(CFLAGS_WARNINGS) $(CFLAGS_DEFINES)

LIB_MALLOC_TRACE = malloctrace

# System shell utilities
CC = gcc
RM = rm -f
CP = cp
AR = ar
RANLIB = ranlib

INCLUDEPATH = ./
BINPATH = bin

all: clean lib_malloc_trace sample

lib_malloc_trace:
	$(CC) -c -o $(BINPATH)/libmalloctrace.o malloctrace.c -I$(INCLUDEPATH) $(CFLAGS)
	$(AR) rc $(BINPATH)/lib$(LIB_MALLOC_TRACE).a $(BINPATH)/lib$(LIB_MALLOC_TRACE).o
	$(RANLIB) $(BINPATH)/lib$(LIB_MALLOC_TRACE).a
	$(CP) $(INCLUDEPATH)/$(LIB_MALLOC_TRACE).h $(BINPATH)
	-$(RM) $(BINPATH)/lib$(LIB_MALLOC_TRACE).o

sample:
	$(CC) -o $(BINPATH)/sample sample.c $(CFLAGS) -L$(BINPATH) -l$(LIB_MALLOC_TRACE)


clean:
	-$(RM) $(BINPATH)/*
