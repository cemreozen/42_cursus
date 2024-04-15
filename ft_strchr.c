char	*ft_strchr(const char *s, int c)
{
	char	A;

	A = (char) c;
	while (*s)
	{
		if (*s == A)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	else
		return (NULL);
}