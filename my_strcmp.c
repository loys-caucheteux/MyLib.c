/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** reproduce the behaviour of the str cmp c function
** By Loys Caucheteux
** login : loys.caucheteux@epitech.eu
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int res = 0;
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return (res);
        }
        i++;
    }
    return (res);
}
