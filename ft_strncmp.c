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