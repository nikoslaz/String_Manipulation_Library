#include "mystring.h"

/* Retuns the lenght of the array */
size_t ms_lenght(const char pcStr[]){
    int i;
    i = 0;
    assert(pcStr != NULL);

    while(pcStr[i] != '\0')
    {
        i++;
    }

    return i;
}

/* Retuns the copied array */
char *ms_copy(char  *dest, const char *pcStr){
    int i;
    i = 0;

    assert(dest != NULL || pcStr != NULL); 

    while(pcStr[i] != '\0')
    {
        dest[i] = pcStr[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}

/* Retuns the copied array(n times) */
char *ms_ncopy(char *dest , const char *pcStr, size_t n){
    int i;
    i = 0;

    assert(dest != NULL || pcStr != NULL);  

    for(i = 0; i < n; i++)
    {
        dest[i] = pcStr[i];
    }

    dest[i] = '\0';

    return dest;
}

/* Return the concatenated array */
char *ms_concat(char *dest , const char *pcStr){
    int i, j;
    i = 0;
    j = 0;
    assert(dest != NULL || pcStr != NULL);  

    while (dest[i] != '\0')
    {
        i++; /* size */
    }

    while (pcStr[j] != '\0')
    {
        dest[i] = pcStr[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

/* Returns the concatenated array(n times) */
char *ms_nconcat(char *dest , const char *pcStr, size_t n){
    int i, j;
    i = 0;
    j = 0;

    assert(dest != NULL || pcStr != NULL);  

    while (dest[i] != '\0')
    {
        i++; /* size */
    }

    while (j < n)
    {
        dest[i] = pcStr[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

/* Returns 0 if string are equal
   Returns >0 if the first is greater(in ASCII) than the second
   Returns <0 if the second is greater(in ASCII) than the first*/
int ms_compare(const char *pcStr1 , const char *pcStr2) {
    assert(pcStr1 != NULL || pcStr2 != NULL);

    while (*pcStr1 && *pcStr1 == *pcStr2) {
        pcStr1++;
        pcStr2++;
    }

    return *(const unsigned char*)pcStr1 - *(const unsigned char*)pcStr2; 
}

/* Returns 0 if string are equal(n times)
   Returns >0 if the first is greater(in ASCII) than the second(n times)
   Returns <0 if the second is greater(in ASCII) than the first(n times)*/
int ms_ncompare(const char pcStr[] , const char pcStr2[] , size_t n){
    int i;
    i = 0;

    assert(pcStr != NULL || pcStr2 != NULL);

    while (i < n)
    {
        if (pcStr[i] == pcStr2[i]) {
            break;
        }
 
        i++;
    }
 
    return *(const unsigned char*)pcStr - *(const unsigned char*)pcStr2;
}

/* Return if the word is contained in the array */
int ms_search(const char *pcStr, const char *needle) {
    int i, haystack_len, needle_len;
    assert(pcStr || needle);  

    haystack_len = ms_lenght(pcStr);
    needle_len   = ms_lenght(needle);

    if (needle_len > haystack_len) {
        return -1; 
    }

    for (i = 0; i <= haystack_len - needle_len; i++) {
        if (pcStr[i] == needle[0] && ms_compare(pcStr + i, needle)) { 
            return 1; 
        }
    }

    return -1; 
}