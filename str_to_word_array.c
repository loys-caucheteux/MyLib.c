/*
** EPITECH PROJECT, 2021
** str_to_word_array
** File description:
** strtowordarray
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

int n_word(char *str, char sep)
{
    int res = 0;
    int f = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        while (str[i] == sep) {
            i++;
            f = 1;
        }
        if (f == 1 && str[i] != '\0') {
            res++;
            f = 0;
        }
    }
    return (res);
}

char **my_str_to_word_array(char *str, char sep)
{
    int n = n_word(str, sep);
    char **res = malloc((n + 1) * sizeof(char *));
    int index = 0;
    int i;

    for (int i = 0; str[i] != '\0' && index < n; i++) {
        while (str[i] == sep && str[i] != '\0')
            i++;
        if (str[i] != '\0') {
            res[index] = get_first_word(&str[i], sep);
            index++;
            i += my_strlen(res[index - 1]);
        }
    }
    res[index] = NULL;
    return (res);
}

char *get_first_word(char *str, char sep)
{
    char *tmp = malloc(my_firstwordlen(str, sep) * sizeof(char));
    int i = 0;
    int len = my_firstwordlen(str, sep);

    while (i != len) {
        tmp[i] = str[i];
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}

int my_firstwordlen(char *str, char sep)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != sep)
    {
        i++;
    }
    return (i);
}