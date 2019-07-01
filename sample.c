/* Andre Augusto Giannotti Scota
 * andre.scota@gmail.com
 *
 * A Doubly Linked List (DLL) sample
 *
 * MIT License
 *
 */


/* sample.c
 * A sample of malloc/free usage trace.
 *
 *
 *  Who     | When       | What
 *  --------+------------+----------------------------
 *   a2gs   | 30/06/2019 | Creation
 */

/* *** INCLUDES *** */
#include <stdio.h>
#include "malloctrace.h"

int main(int argc, char *argv[])
{
	char *x = NULL;

	x = TRACE_MALLOC(50);

	TRACE_FREE(x);

	return(0);
}
