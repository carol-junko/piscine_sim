#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numbers;
	int		i;

	i = 0;
	while (i < 10)
	{
		numbers = i + '0';
		write(1, &numbers, 1);
		i = i + 1;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
