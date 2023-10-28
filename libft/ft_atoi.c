

#include "libft.h"
int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
			sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
