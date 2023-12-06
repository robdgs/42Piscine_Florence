
#include <unistd.h>

void ft_putnbr(int nb)
{
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		
	}
	nb = (nb % 10) + '0';
	write (1, &nb, 1);
}

void print_odd(int numero)
{
	int n;

	n = 1;
	while (n <= numero)
	{
	ft_putnbr(n);
	write (1, "\n", 1);
	n += 2;
	}
}

int main(void)
{
	print_odd(1111);	
}
