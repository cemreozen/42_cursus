void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (dst > src || dst >= src + n || src >= dst + n)
	{
		while (n > 0)
		{
			*dest = *source;
			n--;
			dest++;
			source++;
		}
	}
	return (dst);
}