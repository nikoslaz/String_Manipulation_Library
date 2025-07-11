#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
#include <string.h>

size_t ms_lenght(const char pcStr[]); /*strlen*/

char *ms_copy(char *pcStr , const char *dest); /*strcpy*/

char *ms_ncopy(char *dest, const char *pcStr, size_t n); /*strncpy*/

char *ms_concat(char *dest , const char *pcStr); /*strcat*/

char *ms_nconcat(char *dest , const char *pcStr, size_t n); /*strncat*/

int ms_compare(const char *pcStr , const char *pcStr2); /*strcmp*/

int ms_ncompare(const char *pcStr , const char *pcStr2 , size_t n); /*strncmp*/

int ms_search(const char *pcStr, const char *needle); /*strstr*/
