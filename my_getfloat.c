#include "my.h"

float my_getfloat(char *str)
{
    float res;

    if (my_strcontains(str, '.')) {
        char **arr = my_str_to_word_array(str, '.');
        char *cat = my_strcat(arr[0], arr[1]);
        int precision = my_strlen(arr[1]);
        float semi = my_getnbr(cat);
        res = (semi / (my_compute_power_rec(10, precision)));
    }
    else
        res = my_getnbr(str);
    return (res);
}
