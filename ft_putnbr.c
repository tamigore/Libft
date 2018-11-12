#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int n;

	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	n = nb;
	if (n == 0)
		ft_putchar('0');
	while (n > 0)
	{
		n /= 10;
		ft_putchar(n % 10 + '0');
	}
}

int		main()
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(100);
	ft_putchar('\n');
	ft_putnbr(-2019);
	ft_putchar('\n');
	ft_putnbr(127272614);
	ft_putchar('\n');
	ft_putnbr(2);
	ft_putchar('\n');
	ft_putnbr(-700000);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(-0);
	return (0);
}
