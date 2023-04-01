#include <stdio.h>
#include <string.h>

#define my_strcmp_no 1
#define my_strncmp_no 2
#define my_strchr_no 3
#define max_str 80

/*
Compares two strings character by character.
If the strings are equal, the function returns 0
if the first non-matching character in str1 is greater than that of str2 returns 1.
if the first non-matching character in str1 is lower than that of str2 returns -1.

str1 − This is the first string to be compared.

str2 − This is the second string to be compared.

*/
int my_strcmp(char str1[], char str2[]);

/*
compares at most the first n bytes of str1 and str2.
if Return value < 0 then it indicates str1 is less than str2.
if Return value > 0 then it indicates str2 is less than str1.
if Return value = 0 then it indicates str1 is equal to str2

str1 − This is the first string to be compared.

str2 − This is the second string to be compared.

n − The maximum number of characters to be compared.

*/
int my_strncmp(char str1[], char str2[], size_t n);

/*
Searches for the first occurrence of the character c in the string.
returns the index of the first occurrence of the character c in the string, or -1 if the character is not found.

str − This is the C string to be scanned.

c − This is the character to be searched in str.

*/
int my_strchr(char str[], char c);

/* The program implements strcmp, strncmp, strchr */
int main()
{
    int user_select;
    char str1[max_str], str2[max_str], c;
    int n, res, is_exit;

    is_exit = 0;

    while (!is_exit)
    {
        user_select = 0;

        printf("\nPlease enter the function you want to test:\n");
        printf("Enter %d  for my_strcmp - compares two strings\n", my_strcmp_no);
        printf("Enter %d  for my_strncmp - compares two strings to the maximum of specific index\n", my_strncmp_no);
        printf("Enter %d  for my_strchr - searches for the first occurrence of a specific character\n", my_strchr_no);
        scanf("%d", &user_select);
        printf("%d entered\n", user_select);

        switch (user_select)
        {
        case my_strcmp_no:
            printf("\nmy_strcmp: Compares two strings character by character.\n if the strings are equal, the function returns 0\n if the first non-matching character in str1 is greater than that of str2 returns 1.\n if the first non-matching character in str1 is lower than that of str2 returns -1.\n");
            printf("\nPlease enter the first string to be compared\n");
            scanf("%s", str1);

            printf("%s entered\n", str1);
            printf("Please enter the second string to be compared\n");
            scanf("%s", str2);
            printf("%s entered\n", str2);
            res = my_strcmp(str1, str2);
            break;
        case my_strncmp_no:
            printf("\nmy_strncmp: compares at most the first n bytes of str1 and str2.\nif Return value < 0 then it indicates str1 is less than str2.\nif Return value > 0 then it indicates str2 is less than str1.\nif Return value = 0 then it indicates str1 is equal to str2\n");
            printf("\nPlease enter the first string to be compared\n");
            scanf("%s", str1);
            printf("%s entered\n", str1);
            printf("Please enter the second string to be compared\n");
            scanf("%s", str2);
            printf("%s entered\n", str2);
            printf("Please enter how many characters to compare form the start\n");
            scanf("%d", &n);
            printf("%d entered\n", n);
            res = my_strncmp(str1, str2, n);
            break;
        case my_strchr_no:
            printf("\nmy_strchr: Searches for the first occurrence ofa specific character in the string.\nreturns the index of the first occurrence of the character in the string, or -1 if the character is not found.\n");
            printf("\nPlease enter a string\n");
            scanf("%s", str1);
            printf("%s entered\n", str1);
            printf("Please enter the character you want to find\n");
            scanf(" %c", &c);
            printf("%c entered\n", c);
            res = my_strchr(str1, c);
            break;
        default:
            printf("\nNot valid input\n");
            break;
        }

        if (user_select == my_strchr_no || user_select == my_strcmp_no || user_select == my_strncmp_no)
        {
            printf("\nThe result is %d\n", res);
        }

        printf("\nDo you want to exit?\n");
        printf("Enter 0 to continue\n");
        printf("Enter 1 to exit\n");
        scanf("%d", &is_exit);
        printf("%d entered\n", is_exit);
    }

    printf("\nThank you for using the service, see next time :)\n");

    return 0;
}

int my_strcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] > str2[i])
            return 1;
        else if (str1[i] < str2[i])
            return -1;

        i++;
    }
    return 0;
}

int my_strncmp(char str1[], char str2[], size_t n)
{
    int i;

    for (i = 0; i < n && str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] > str2[i])
            return 1;
        else if (str1[i] < str2[i])
            return -1;
    }
    return 0;
}

int my_strchr(char str[], char c)
{

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
            return i;

        i++;
    }

    return -1;
}
