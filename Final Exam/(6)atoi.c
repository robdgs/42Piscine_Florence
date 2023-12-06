
#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int	i;
	int sign;
	int numero;

	i = 0;
	sign = 0;
	numero = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = numero * 10 + (str[i] - '0');
		i++;
	}
	if (sign == 1)
		numero = -numero;
	return (numero);
}

int main()
{
	char str[] = "-23231sd2323";
	printf("%d", ft_atoi(str));
	return(0);
}
