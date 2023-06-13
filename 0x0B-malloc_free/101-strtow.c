#include "main.h"

int count_words(char *str);
char **strtow(char *str);

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
        int count = 0;
        int i = 0;

        while (str[i] != '\0')
        {
                if (str[i] != ' ')
                {
                        count++;
                        while (str[i] != ' ' && str[i] != '\0')
                                i++;
                }
                else
                        i++;
        }

        return count;
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
        int i, j, k, word_length, word_count;
        char **words;

        if (str == NULL || *str == '\0')
                return NULL;

        word_count = count_words(str);
        words = (char **)malloc((word_count + 1) * sizeof(char *));
        if (words == NULL)
                return NULL;

        i = 0;
        j = 0;
        k = 0;

        while (str[i] != '\0')
        {
                if (str[i] != ' ')
                {
                        word_length = 0;

                        while (str[i] != ' ' && str[i] != '\0')
                        {
                                word_length++;
                                i++;
                        }

                        words[j] = (char *)malloc((word_length + 1) * sizeof(char));
                        if (words[j] == NULL)
                        {
                                for (k = 0; k < j; k++)
                                        free(words[k]);
                                free(words);
                                return NULL;
                        }

                        strncpy(words[j], &str[i - word_length], word_length);
                        words[j][word_length] = '\0';
                        j++;
                }
                else
                        i++;
        }

        words[j] = NULL;

        return words;
}
