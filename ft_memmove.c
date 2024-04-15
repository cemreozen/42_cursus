#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	const unsigned char *source;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (dest == source)
		return (dest);
	if (source > dest || dest >= source + len)
	{
		while (len--) //copy forwards 
			*dest++ = *source++;
	}
	else
	{
		dest += len - 1;
		source += len - 1;
		while (len--)
			*dest-- = *source--;
	}
	return (dst);
}