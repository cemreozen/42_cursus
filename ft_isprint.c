int	ft_isprint(int	c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}