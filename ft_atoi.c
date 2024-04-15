#include <limits.h>

void	skip_ws(const char *str)
{
	while (*str != '\0' && (*str == '\t' || *str == '\n' ||
				*str == '\v' || *str == '\f' ||
				*str == '\r' || *str == ' '))
		str++;
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	counter;

	sign = 1;
	result = 0;
	counter = 0;
	skip_ws(str);
	while (*str != '\0' && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		counter++;
		str++;
	}
	if (counter > 1 || !(*(str + 1) >= '0' && *(str + 1) <= '9'))
		return (0);
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

       +890546820948568