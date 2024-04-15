int	ft_tolower(int	c)
{
	unsigned char	a;
	
	a = (unsigned char)c;
	if (a >= 'A' && a <= 'Z')
		a += 32;
	return ((int)a);
}
