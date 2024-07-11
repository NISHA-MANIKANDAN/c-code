char* kthDistinct(char** arr, int arrSize, int k) {
    // Array to store the frequency of each string
    int count[1001] = {0};
    // Loop to count the frequency of each string
    for (int i = 0; i < arrSize; i++) {
        for (int j = 0; j < arrSize; j++) {
            if (strcmp(arr[i], arr[j]) == 0) {
                count[i]++;
            }
        }
    }
    // Counter to track the number of distinct strings encountered
    int distinctCount = 0;
    // Loop to find the kth distinct string
    for (int i = 0; i < arrSize; i++) {
        if (count[i] == 1) {
            distinctCount++;
            if (distinctCount == k) {
                return arr[i];
            }
        }
    }
    // If there are fewer than k distinct strings, return an empty string
    return "";
}


//optimised code
char* kthDistinct(char** arr, int arrSize, int k) {
    bool *valid = malloc(sizeof(bool)*arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        valid[i] = true;
    }

    int count = 0;
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        {
            if (!valid[j])
                continue;

            if (strcmp(arr[i], arr[j]) == 0)
            {
                valid[i] = false;
                valid[j] = false;
            }
        }

        if (valid[i])
            count++;
        
        if (count == k)
            return arr[i];
    }

    return "";
}
