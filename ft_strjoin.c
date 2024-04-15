#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_substrcpy(char *dst, char *src, int len, int start)
{
	int	i;

	i = 0;
	while (len > 0 && src[start + i] != '\0')
	{
		dst[i] = src[start + i];
		len--;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}


char *ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;
	size_t	totallen;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	totallen = len1 + len2 + 1;

	if (s1 != NULL && s2 != NULL)
	{
		ptr = (char *)malloc(totallen);
		if (ptr == NULL)
			return (NULL);
		ptr = ft_substrcpy(ptr, s1, len1, 0);
		ptr = ft_substrcpy(ptr + len1 - 1, s2, len2, 0);
		return (ptr);
	}
	return (NULL);
}