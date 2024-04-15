#include <stdlib.h>
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char	*a;
    unsigned char	*b;

    a = (const unsigned char *)s1;
    b = (const unsigned char *)s2;

    while (n > 0 && *a != '\0' && *b != '\0' && *a == *b)
    {
        a++;
        b++;
        n--;
    }
    if (n == 0)
        return (0);
    return (*a - *b);
}

int	ft_strlen(const char *str)
{
    int	i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strtrim(const char *s1, const char *set) {

    char *trimmed_str;
    int i;
    size_t set_len;
    size_t s1_len;

    set_len = ft_strlen(set);
    s1_len = ft_strlen(s1);
    i = 0;
    if (!ft_strncmp(s1, set, set_len) || !ft_strncmp(s1 + s1_len - set_len, set, set_len))
        return (s1);
    trimmed_str = (char *) malloc(s1_len - 2 * set_len + 1);
    if (trimmed_str == NULL)
        return (NULL);
    while (i < s1_len - set_len) {
        trimmed_str[i] = s1[set_len + i];
        i++;
    }
    trimmed_str[i] = '\0';
    return (trimmed_str);
}
//
// Created by Cemre Özen on 22.03.24.
//