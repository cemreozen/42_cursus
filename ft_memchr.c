void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	A;

	A = c;
	if (s == NULL)
		return (NULL);
	p = s;
	while (n > 0)
	{
		if (*p == A)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}