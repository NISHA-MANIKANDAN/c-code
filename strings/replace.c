// Replace specific char with another char and numbers with 'n' . 'a' -> 'b', 't' -> 'g'number -> 'n'
// Input: "Education4all", Output : "Educbgionnbll"
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    printf("Original string: %s\n", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a')
            str[i] = 'b';
        else if (str[i] == 't')
            str[i] = 'g';
        else if (isdigit(str[i]))
            str[i] = 'n';
    }

    printf("Modified string: %s\n", str);

    return 0;
}
