/* Andre Augusto Giannotti Scota
 * andre.scota@gmail.com
 *
 * A malloc/free memory usage trace.
 *
 * MIT License
 *
 */


/* malloctrace.c
 *
 *  Who     | When       | What
 *  --------+------------+----------------------------
 *   a2gs   | 30/06/2019 | Creation
 */


/* *** INCLUDES *** */
#include <stdio.h>
#include <stdlib.h>

void * trace_malloc(char *file, int line, size_t szmem)
{
	void *p = NULL;

	p = malloc(szmem);

	fprintf(stderr, "[%p]\t[%ld] bytes allocated at [%s] line [%d].\n", p, szmem, file, line);

	return(p);
}

void trace_free(char *file, int line, void *mem)
{
	fprintf(stderr, "[%p]\twill be released at [%s] line [%d].\n", mem, file, line);

	free(mem);
}
