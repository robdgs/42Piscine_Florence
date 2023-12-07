
#include <stdio.h>
#include <unistd.h>

void	ft_print_intervals(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, " ", 1);
		}
		i++;
	}
}

int	main(void)
{
	char	*c = "It's a wonderful world";
	
	ft_print_intervals(c);
	return (0);
}
