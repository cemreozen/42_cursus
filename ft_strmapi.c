#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    fake(unsigned int a, char c)
{
    return (c+a);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    char    *a;
    char    *orig;

    a = malloc(strlen(s) + 1);
    orig = a;
    if (a == NULL)
        return (NULL);
    while (*s)
    {
        *a = f(1, *s);
        a++;
        s++;
    }
    return (orig);
}

int main(void)
{
    char *s;

    s = "okayyyyyy let's go!";
    printf("%s\n", ft_strmapi(s, fake));
    return(0);
}
//
// Created by Cemre Özen on 04.04.24.
//
