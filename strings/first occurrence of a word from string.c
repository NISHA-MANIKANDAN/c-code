/**
 * C program to remove the first occurrence of a word in a string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/** Function declaration */
void removeFirst(char * str, const char * toRemove);


int main()
{
    char str[MAX_SIZE];
    char toRemove[MAX_SIZE];

    /* Input string and word to be removed from user  */
    printf("Enter any string: ");
    gets(str);
    printf("Enter string to be removed: ");
    gets(toRemove);

    removeFirst(str, toRemove);

    printf("\nString after removing '%s': \n%s", toRemove, str);

    return 0;
}


/**
 * Remove first occurrence of a word from string
 */
void removeFirst(char * str, const char * toRemove)
{
    int i, j;
    int len, removeLen;
    int found = 0;

    len = strlen(str);
    removeLen = strlen(toRemove);

    for(i=0; i<len; i++)
    {
        found = 1;
        for(j=0; j<removeLen; j++)
        {
            if(str[i+j] != toRemove[j])
            {
                found = 0;
                break;
            }
        }

        /* If word has been found then remove it by shifting characters  */
        if(found == 1)
        {
            for(j=i; j<=len-removeLen; j++)
            {
                str[j] = str[j + removeLen];
            }

            // Terminate from loop so only first occurrence is removed
            break;
        }
    }
}
