#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (*src != '\0' && i < dstsize - 1)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	return (i);
}
