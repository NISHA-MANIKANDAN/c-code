int minimumLength(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right && s[left] == s[right]) {
        char currentChar = s[left];
        
        // Move left pointer to the right
        while (left <= right && s[left] == currentChar) {
            left++;
        }
        
        // Move right pointer to the left
        while (left <= right && s[right] == currentChar) {
            right--;
        }
    }
    
    return right - left + 1;
}


//optimised soln(7ms)
int minimumLength(char* s) {
    int len = strlen(s);
    int l= 0, r = len - 1;
    
    while(l < r) {
        if(s[l] != s[r]) break;
        char curChar = s[l];
        while(l <= r && s[l] == curChar) l++;
        while(l< r && curChar == s[r]) r--;
    }
    
    return r - l+ 1;
}
