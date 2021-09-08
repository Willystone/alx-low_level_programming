#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 *
 * @a: First pointer argument.
 * @b: Second pointer argument.
 */

	   

		char *
           strncat(char *dest, const char *src, size_t n)

           {
               size_t dest_len = strlen(dest);
               size_t i;

               for (i = 0 ; i < n && src[i] != '\0' ; i++)
                   dest[dest_len + i] = src[i];
               dest[dest_len + i] = '\0';

               return dest;
           }
