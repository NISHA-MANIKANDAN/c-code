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


//improved time complexity

bool isValid(char *s) {
    int n = strlen(s);
    char stack[n]; // Stack to hold opening brackets
    int top = -1;  // Initialize stack pointer
    
    // Map for matching brackets
    char map[128] = {0};
    map[')'] = '(';
    map[']'] = '[';
    map['}'] = '{';
    
    // Traverse through each character in the string
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        
        if (ch == '(' || ch == '[' || ch == '{') {
            // Push opening brackets onto the stack
            stack[++top] = ch;
        } else if (ch == ')' || ch == ']' || ch == '}') {
            // Check if stack is empty or mismatched
            if (top == -1 || stack[top] != map[ch]) {
                return false; // Mismatched brackets or no matching opening bracket
            }
            top--; // Pop the stack
        }
    }
    
    // After iterating through the string, stack should be empty if valid
    return top == -1;
}
