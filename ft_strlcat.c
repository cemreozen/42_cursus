#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	j = 0;
	if (dstsize > i)
	{
		while (*src != '\0' && j < dstsize - i - 1)
		{
			*dst++ = *src++;
			j++;
		}
		*dst = '\0';
	}
	return (i + j);
}
