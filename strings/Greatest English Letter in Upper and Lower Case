//Example 1:

//Input: s = "lEeTcOdE"
//Output: "E"
//Explanation:
//The letter 'E' is the only letter to appear in both lower and upper case.



char* greatestLetter(const char* s) {
    int lower[26] = {0};
    int upper[26] = {0};
    int length = strlen(s);
    
    // Populate the arrays with the frequency of lowercase and uppercase letters
    for (int i = 0; i < length; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            lower[s[i] - 'a']++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            upper[s[i] - 'A']++;
        }
    }
    
    // Find the greatest letter which is present in both lowercase and uppercase forms
    for (int i = 25; i >= 0; i--) {
        if (lower[i] > 0 && upper[i] > 0) {
            static char result[2];
            result[0] = 'A' + i;
            result[1] = '\0';
            return result;
        }
    }
    
    return ""; // Return an empty string if no such letter is found
}
