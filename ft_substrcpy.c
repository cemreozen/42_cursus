char *ft_substrcpy(char *dst, char *src, int len, int start)
{
	int	i;

	i = 0;
	while (len > 0 && src[start + i] != '\0')
	{
		dst[i] = src[start + i];
		len--;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
