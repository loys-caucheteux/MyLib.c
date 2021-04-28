/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_strcontains
*/

int my_strcontains(char *str, char c)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            return (1);
    }
    return (0);
}
