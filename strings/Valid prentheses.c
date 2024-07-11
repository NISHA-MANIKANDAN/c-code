bool isValid(char* s) {
    
 int n = strlen(s);
    char stack[n]; // Stack to hold opening brackets
    int top = -1;  // Initialize stack pointer
    
    // Traverse through each character in the string
    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            // Push opening brackets onto the stack
            stack[++top] = s[i];
        } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            // Check if stack is empty before popping
            if (top == -1) {
                return false; // No matching opening bracket
            }
            
            // Pop the top element and check if it matches
            char topChar = stack[top--];
            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == ']' && topChar != '[') ||
                (s[i] == '}' && topChar != '{')) {
                return false; // Mismatched brackets
            }
        }
    }
    
    // After iterating through the string, stack should be empty if valid
    return top == -1;
}
