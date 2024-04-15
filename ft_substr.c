#include <stdlib.h>

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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;

	if (s != NULL)
	{
		ptr = malloc(len + 1);
		if (ptr == NULL)
			return (NULL);
		ft_substrcpy(ptr, s, len, start);
		return (ptr);
	}
	else
		return (NULL);
}:
