## SUBJECT
```
```

## ANSWEAR

```c
#include <stdlib.h>  // Include standard library for malloc and free functions

// Function to calculate the length of a word
int ft_wordlen(char *str)
{
    int i = 0;

    // Loop until we hit a space, tab, newline, or the null terminator
    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        ++i;  // Increment i to count characters of the word
    return (i);  // Return the length of the word
}

// Function to duplicate a word from the string
char *word_dupe(char *str)
{
    int i = 0;
    int len = ft_wordlen(str);  // Get the length of the word
    char *word = malloc(sizeof(char) * (len + 1));  // Allocate memory for the word, including space for the null terminator

    word[len] = '\0';  // Null terminate the string
    // Copy each character from the original string to the new word
    while (i < len)
    {
        word[i] = str[i];
        ++i;
    }
    return (word);  // Return the new word
}

// Function to fill an array with words extracted from the string
void fill_words(char **array, char *str)
{
    int word_index = 0;

    // Skip any leading spaces, tabs, or newlines
    while (*str == ' ' || *str == '\t' || *str == '\n')
        ++str;
    // Loop through the string and extract words
    while (*str != '\0')
    {
        // Duplicate the word and store it in the array
        array[word_index] = word_dupe(str);
        ++word_index;
        // Skip over the current word to reach the next whitespace
        while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
            ++str;
        // Skip over any spaces or tabs after the word
        while (*str == ' ' || *str == '\t' || *str == '\n')
            ++str;
    }
}

// Function to count the number of words in the string
int count_words(char *str)
{
    int num_words = 0;

    // Skip any leading spaces, tabs, or newlines
    while (*str == ' ' || *str == '\t' || *str == '\n')
        ++str;
    // Loop through the string and count words
    while (*str != '\0')
    {
        ++num_words;  // Count a new word
        // Skip over the current word
        while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
            ++str;
        // Skip over any spaces or tabs after the word
        while (*str == ' ' || *str == '\t' || *str == '\n')
            ++str;
    }
    return (num_words);  // Return the number of words
}

// Function to split a string into an array of words
char **ft_split(char *str)
{
    int num_words;  // To store the number of words
    char **array;   // Array to store the words

    num_words = count_words(str);  // Get the number of words in the string
    // Allocate memory for an array of pointers to words
    array = malloc(sizeof(char *) * (num_words + 1));

    array[num_words] = 0;  // Null terminate the array (this is the final element)
    fill_words(array, str);  // Fill the array with words extracted from the string
    return (array);  // Return the array of words
}

```
