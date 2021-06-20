#include <unistd.h>

void	ft_putchars(int n1, int n2)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = ((n1 / 10) + '0');
	c2 = ((n1 % 10) + '0');
	c3 = ((n2 / 10) + '0');
	c4 = ((n2 % 10) + '0');
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (n1 != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchars(n1, n2);
			++n2;
		}
		++n1;
	}
}
