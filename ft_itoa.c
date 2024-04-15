#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nb)
{
    int divisor;
    int is_neg;
    int len;
    char *s;
    char *s_orig;

    len = 1;
    if (nb < 0)
    {
        len +=1;
        is_neg = 1;
    }
    else
        nb *= -1;
    divisor = -1;
    while (nb/divisor >= 10)
    {
        divisor *= 10;
        len += 1;
    }
    s = malloc(len * sizeof(char) + 1);
    s_orig = s;
    if (is_neg)
    {
        *s = '-';
        s++;
    }
    while (divisor <= -1 )
    {
        *s = nb/divisor + '0';
        s++;
        nb = nb%divisor;
        divisor /= 10;
    }
    *s = '\0';
    return (s_orig);
}

int main()
{
    int nb = -173;
    char *s;

    s = ft_itoa(nb);
    printf("%s\n", s);
    printf("%p\n", s);
    return (0);
}
//
// Created by Cemre Özen on 04.04.24.
//
