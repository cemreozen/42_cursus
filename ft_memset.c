void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
    unsigned char *a;

    a = c;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = a;
		ptr++;
		n--;
	}
	return (s);
}