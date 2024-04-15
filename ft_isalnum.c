int	ft_isalnum(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if ((a >= 'a' && a <= 'z') ||
			(a >= '0' && a <= '9') ||
			(a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}
