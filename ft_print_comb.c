#include <unistd.h>

void	ft_print_comb(void)
{
	int		d1;
	int		d2;
	char	x;
	char	y;

	d1 = 0;
	while (d1 <= 8)
	{
		d2 = d1 + 1;
		while (d2 <= 9)
		{
			x = d1 + '0';
			y = d2 + '0';
			write(1, &x, 1);
			write(1, &y, 1);
			if (!(d1 == 8 && d2 == 9))
				write(1, ", ", 2);
			d2 = d2 + 1;
		}
		d1 = d1 + 1;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
}
