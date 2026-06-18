#include <unistd.h>

void	ft_putnbr(int n)
{
	char	number;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = (n * -1);
		write(1, "-", 1);
	}
	if (n >= 0 && n < 10)
	{
		number = (n + '0');
		write(1, &number, 1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		number = ((n % 10) + '0');
		write (1, &number, 1);
	}
}

int	main(void)
{
	ft_putnbr(0);
	ft_putnbr(-2147483648);
	return (0);
}
