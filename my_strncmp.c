/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** reproduce the behaviour of the strc mp c function
** By Loys Caucheteux
** login : loys.caucheteux@epitech.eu
*/

#include "my.h"

int return_i(int s1, int s2)
{
    if (s2 > s1)
        return (-1);
    else if (s1 > s2)
        return (1);
    else if (s1 = s2)
        return (0);
}

int my_strncmp(char const *s1, char const *s2, int n) {
    int ret;
    int flag = 0;
    int s1_wei = 0;
    int s2_wei = 0;

    for (int i = 0; s1[i] != '\0' && flag == 0; i++) {
	if (s1[i] >= 45 && s1[i] <= 90)
        	s1_wei = (s1_wei + (s1[i] + 32));
	else
		s1_wei = (s1_wei + s1[i]);
        if (i >= n)
            flag = 1;
    }
    flag = 0;
    for (int i = 0; s2[i] != '\0' && flag == 0; i++) {
        if (s2[i] >= 45 && s2[i] <= 90)
        	s2_wei = (s2_wei + (s2[i] + 32));
	else
		s2_wei = (s2_wei + s2[i]);
        if (i >= n)
            flag = 1;
    }
    ret = return_i(s1_wei, s2_wei);
    return (ret);
}
