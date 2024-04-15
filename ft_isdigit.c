int	ft_isdigit(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
