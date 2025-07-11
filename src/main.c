#include "mystring.h"


int main(){
    char *haystack1;
    char *needle1;
    char *haystack2;
    char *needle2;
    char *haystack3;
    char *needle3;
    char *haystack4;
    char *needle4;
    char ptr[10] = "Test";
    char dest[10];
    char dest2[10];
    char dest3[10] = "PPP";
    char X[10] = "AceThe";
    char Y[10] = "Ace";
    int test;
    int ret;

    test = ms_lenght(ptr);
    printf("Strlen: %d\n", test);
    
    ms_copy(dest,ptr); 
    printf("Strcpy: %s\n", dest);
    
    ms_ncopy(dest2,ptr,3);
    printf("Strncpy: %s\n", dest2);

    ms_concat(dest3,ptr);
    printf("Strcat :%s\n", dest3);

    ms_nconcat(dest3,ptr,3);
    printf("Strncat :%s\n", dest3);

    ret = strcmp(X, Y);
    printf("Strcmp : ");

    if (ret > 0)
    {
        printf("%s", "X is greater than Y\n");
    }
    else if (ret < 0)
    {
        printf("%s", "X is less than Y\n");
    }
    else{
        printf("%s", "X is equal to Y\n");
    }
    
    ret = strncmp(X, Y, 3);
    printf("Strncmp : ");
    
    if (ret > 0)
    {
        printf("%s", "X is greater than Y\n");
    }
    else if (ret < 0)
    {
        printf("%s", "X is less than Y\n");
    }
    else{
        printf("%s", "X is equal to Y\n");
    }


    /* Test for search */
    haystack1 = "This is a test string";
    needle1 = "test";

    haystack2 = "Example sentence";
    needle2 = "word";

    haystack3 = "A needle in a haystack";
    needle3 = "needle";   

    haystack4 = ""; 
    needle4 = "anything";

    assert(ms_search(haystack1, needle1) == 1);
    assert(ms_search(haystack2, needle2) == -1);
    assert(ms_search(haystack3, needle3) == 1);
    assert(ms_search(haystack4, needle4) == -1); 

    printf("All tests passed\n");

    return 0;
}