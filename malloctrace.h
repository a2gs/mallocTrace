/* Andre Augusto Giannotti Scota
 * andre.scota@gmail.com
 *
 * A malloc/free memory usage trace.
 *
 * MIT License
 *
 */


/* malloctrace.h
 *
 *  Who     | When       | What
 *  --------+------------+----------------------------
 *   a2gs   | 30/06/2019 | Creation
 */


#ifndef __A2GS_MALLOC_TRACE__
#define __A2GS_MALLOC_TRACE__


/* *** DEFINES AND LOCAL DATA TYPE DEFINATION *** */
#define TRACE_MALLOC(n) trace_malloc(__FILE__, __LINE__, n)
#define TRACE_FREE(n)   trace_free  (__FILE__, __LINE__, n)

void trace_free(char *file, int line, void *mem);
void * trace_malloc(char *file, int line, size_t szmem);

#endif
