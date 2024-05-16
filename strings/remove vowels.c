#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    printf("Original string: %s\n", str);

    printf("String without vowels: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) != 'a' && tolower(str[i]) != 'e' && tolower(str[i]) != 'i' &&
            tolower(str[i]) != 'o' && tolower(str[i]) != 'u') {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}
