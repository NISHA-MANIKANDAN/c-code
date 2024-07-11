bool isAnagram(char* s, char* t) { 
    // If the lengths are different, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        return false;
    }

    int count[256] = {0}; // Assuming ASCII character set

    // Increment the count for each character in s
    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
    }

    // Decrement the count for each character in t
    for (int i = 0; t[i] != '\0'; i++) {
        count[(unsigned char)t[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
