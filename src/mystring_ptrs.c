#include "mystring.h"

/* Retuns the lenght of the array */
size_t ms_lenght(const char *pcStr) {

	const char *pcStrEnd = pcStr;
	assert(pcStr);

	while (*pcStrEnd)
    {
	  pcStrEnd++;
    }
	return pcStrEnd - pcStr;

}

/* Retuns the copied array */
char *ms_copy(char *dest, const char *pcStr){
    assert(pcStr || dest);

    while (*pcStr != '\0')
    {
        *dest = *pcStr;
        dest++;
        pcStr++;
    }
  
    *dest = '\0';
 
    return dest;
}

/* Retuns the copied array(n times) */
char *ms_ncopy(char *dest , const char *pcStr, size_t n)
{
    int i;
    i = 0;
    assert(pcStr || dest);
 
   while(i < n)
    {
        *dest = *pcStr;
        i++;
        pcStr++;
        dest++;
    }
 
    *dest = '\0';
 
    return dest;
}

/* Return the concated array */
char *ms_concat(char *dest , const char *pcStr){
    assert(pcStr || dest);

    while(*dest != '\0')
    {
        dest++;
    }

    while(*pcStr != '\0')
    {
        *dest = *pcStr;
        dest++;
        pcStr++;
    }

    *dest = '\0';    
 
    return dest;
}

/* Returns the concated array(n times) */
char *ms_nconcat(char *dest , const char *pcStr, size_t n){
    int i;
    i = 0;

    assert(pcStr || dest);

    while(*dest != '\0')
    {
        dest++;
    }

    while(i < n)
    {
        *dest = *pcStr;
        i++;
        pcStr++;
        dest++;
    }

    *dest = '\0';

 
    return dest;

}

/* Returns 0 if string are equal
   Returns >0 if the first is greater(in ASCII) than the second
   Returns <0 if the second is greater(in ASCII) than the first */
int ms_compare(const char *pcStr , const char *pcStr2){
    assert(pcStr || pcStr2);

    while (*pcStr)
    {
        if (*pcStr != *pcStr2) {
            break;
        }
 
        pcStr++;
        pcStr2++;
    }
 
    return *(const unsigned char*)pcStr - *(const unsigned char*)pcStr2;
}

/* Returns 0 if string are equal(n times)
  Returns >0 if the first is greater(in ASCII) than the second(n times)
  Returns <0 if the second is greater(in ASCII) than the first(n times) */
int ms_ncompare(const char *pcStr , const char *pcStr2 , size_t n){
    int i;
    i = 0;
    assert(pcStr || pcStr2);

    while(i  < n)
    {
        if (*pcStr != *pcStr2) {
            break;
        }
 
        pcStr++;
        pcStr2++;
        i++;
    }
 
    return *(const unsigned char*)pcStr - *(const unsigned char*)pcStr2;
}

/* Return if the word is contained in the array */
int ms_search(const char *pcStr, const char *needle){
    assert(pcStr || needle);

    while (*pcStr != '\0')
    {
        if ((*pcStr == *needle) && ms_compare(pcStr, needle)) {
            return 1;
        }
        pcStr++;
    }

    return -1;
}
