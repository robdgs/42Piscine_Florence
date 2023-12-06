#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
			c++;
		i++;
	}
	return (c);
}

int main(void)
{
	char *str = "ol\nozzc\t\0azzoloz";

	printf("%d", ft_strlen(str));
}
