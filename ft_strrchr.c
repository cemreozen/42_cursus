char	*ft_strrchr(const char *s, int c)
{
	char	A;
	const char	*end;

	A = (char) c;
	end = s;
	while (*end != '\0')
		end++;
	if (A == '\0')
		return ((char *)end);
	while (end >= s)
	{
		if (*end == A)
			return ((char *)end);
		end--;
	}
	return (NULL);
}
