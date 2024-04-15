void	ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	const unsigned char	*source;
	unsigned char	a;

	a = c;
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (dst > src || src >= dst + n || dst >= src + n)
	{
		while (n > 0)
		{
			*dest = *source;
			if (*source == a)
				return (dest + 1);
			dest++;
			source++;
			n--;
		}
		return (NULL);
	}
}