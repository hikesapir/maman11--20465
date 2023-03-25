#include <stdio.h>
#include <string.h>
/* 
Compares two strings character by character.
If the strings are equal, the function returns 0
if the first non-matching character in cs is greater than that of ct returns 1.
if the first non-matching character in cs is lower than that of ct returns -1.
*/
int my_strcmp(char cs[], char ct[]);

/* 
compares at most the first n bytes of cs and ct.
if Return value < 0 then it indicates cs is less than ct.
if Return value > 0 then it indicates ct is less than cs.
if Return value = 0 then it indicates cs is equal to ct
*/
int my_strncmp(char cs[], char ct[], size_t n);

/* 
Searches for the first occurrence of the character c in the string cs.
returns the index of the first occurrence of the character c in the string cs, or -1 if the character is not found.
*/
int my_strchr(char cs[], int c);

/* The program implements strcmp, strncmp, strchr */
int main()
{

    return 0;
}

int my_strncmp(char cs[], char ct[], size_t n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (cs[i] > ct[i])
            return 1;
        else if (cs[i] < ct[i])
            return -1;
    }
    return 0;
}

int my_strchr(char cs[], int c)
{

    int i, n;
    n = strlen(cs);

    for (i = 0; i < n; i++)
    {
        if (cs[i] == c)
            return i;
    }

    return -1;
}

int my_strcmp(char cs[], char ct[])
{
    int i;
    int length = (strlen(cs) < strlen(ct)) ? strlen(cs) : strlen(ct);

    for (i = 0; i < length; i++)
    {
        if (cs[i] > ct[i])
            return 1;
        else if (cs[i] < ct[i])
            return -1;
    }
    return 0;
}
