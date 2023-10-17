#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100

// Function to clean up the word by removing punctuation
void cleanWord(char *word) {
    int len = strlen(word);
    if (len > 0) {
        if (word[len - 1] == '.' || word[len - 1] == ',') {
            word[len - 1] = '\0';
        }
    }
}

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);

    char words[MAX_WORDS][50];
    int counts[MAX_WORDS] = {0};
    int totalWords = 0;

    // Tokenize the input sentence and count words
    char *token = strtok(input, " ");
    while (token != NULL) {
        cleanWord(token);

        int found = 0;
        for (int i = 0; i < totalWords; i++) {
            if (strcmp(words[i], token) == 0) {
                counts[i]++;
                found = 1;
                break;
            }
        }

        if (!found && totalWords < MAX_WORDS) {
            strcpy(words[totalWords], token);
            counts[totalWords] = 1;
            totalWords++;
        }

        token = strtok(NULL, " ");
    }

    // Display the total number of words
    printf("Total words: %d\n", totalWords);

    // Display word counts
    printf("Word Counts:\n");
    for (int i = 0; i < totalWords; i++) {
        printf("%s: %d\n", words[i], counts[i]);
    }

    return 0;
}