//Reverse each word individually.Input: Hello World Output: olleH dlroW
//Reverse the entire string while maintaining word order. Input: Hello World output: dlroW olleH
//Reverse the entire string and the order of words.Input: Hello World Output: World Hello

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a section of the string
void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to reverse each word individually
void reverseEachWord(char words[][100], int wordcount) {
    for (int i = 0; i < wordcount; i++) {
        reverse(words[i], words[i] + strlen(words[i]) - 1);
    }
}

// Function to reverse the entire string while maintaining word order
void reverseStringMaintainOrder(char *str) {
    reverse(str, str + strlen(str) - 1);
}

// Function to reverse the entire string and the order of words
void reverseWordsAndString(char words[][100], int wordcount) {
    // Reverse the order of words
    for (int i = 0; i < wordcount / 2; i++) {
        char temp[100];
        strcpy(temp, words[i]);
        strcpy(words[i], words[wordcount - i - 1]);
        strcpy(words[wordcount - i - 1], temp);
    }
    // Reverse each word
    reverseEachWord(words, wordcount);
}

int main() {
    char arr[100];
    char words[100][100];
    int freq[100];
    printf("Enter a string: ");
    fgets(arr, 100, stdin);

    int wordcount = 0, j;
    char *p = strtok(arr, " ");
    while (p != NULL) {
        int found = 0;
        j = 0;
        for (int i = 0; i < strlen(p); i++) {
            if (isalpha(p[i])) {
                words[wordcount][j++] = tolower(p[i]);
                found = 1;
            }
        }
        if (found) {
            words[wordcount][j] = '\0';
            wordcount++;
        }
        p = strtok(NULL, " ");
    }

    // Reverse each word individually
    printf("\nReversed each word individually:\n");
    reverseEachWord(words, wordcount);
    for (int i = 0; i < wordcount; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    // Reverse the entire string while maintaining word order
    printf("\nReversed entire string while maintaining word order:\n");
    reverseStringMaintainOrder(arr);
    printf("%s\n", arr);

    // Reverse the entire string and the order of words
    printf("\nReversed entire string and order of words:\n");
    reverseWordsAndString(words, wordcount);
    for (int i = 0; i < wordcount; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
