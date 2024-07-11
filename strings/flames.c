#include <stdio.h>
#include <string.h>

void removeCommonCharacters(char* str1, char* str2, int* count1, int* count2) {
    int charCount1[26] = {0};
    int charCount2[26] = {0};

    // Count characters in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            charCount1[str1[i] - 'A']++;
        }
    }

    // Count characters in the second string
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z') {
            charCount2[str2[i] - 'A']++;
        }
    }

    // Remove common characters
    for (int i = 0; i < 26; i++) {
        int minCount = charCount1[i] < charCount2[i] ? charCount1[i] : charCount2[i];
        *count1 -= minCount;
        *count2 -= minCount;
    }
}

char getFlamesResult(int count) {
    char flames[] = "FLAMES";
    int len = 6;
    int index = 0;

    for (int i = 1; i < len; i++) {
        index = (index + count - 1) % (len - i + 1);
        for (int j = index; j < len - i; j++) {
            flames[j] = flames[j + 1];
        }
    }

    return flames[0];
}

char flamesGame(char* player1, char* player2) {
    // Remove spaces and convert to uppercase
    char str1[100], str2[100];
    int idx1 = 0, idx2 = 0;

    for (int i = 0; player1[i] != '\0'; i++) {
        if (player1[i] != ' ') {
            str1[idx1++] = toupper(player1[i]);
        }
    }
    str1[idx1] = '\0';

    for (int i = 0; player2[i] != '\0'; i++) {
        if (player2[i] != ' ') {
            str2[idx2++] = toupper(player2[i]);
        }
    }
    str2[idx2] = '\0';

    int count1 = strlen(str1);
    int count2 = strlen(str2);

    removeCommonCharacters(str1, str2, &count1, &count2);

    int totalCount = count1 + count2;

    return getFlamesResult(totalCount);
}

int main() {
    char player1_1[] = "AJAY";
    char player2_1[] = "PRIYA";
    printf("Test Case 1: %c\n", flamesGame(player1_1, player2_1));  // Output: F

    char player1_2[] = "John";
    char player2_2[] = "Doe";
    printf("Test Case 2: %c\n", flamesGame(player1_2, player2_2));  // Output: M

    char player1_3[] = "";
    char player2_3[] = "PRIYA";
    printf("Test Case 3: %c\n", flamesGame(player1_3, player2_3));  // Output: S

    return 0;
}
