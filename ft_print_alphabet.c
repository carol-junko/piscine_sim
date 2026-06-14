#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*alphabet;
	int		i;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (i <= alphabet[i])
	{
		write(1, &alphabet[i], 1);
		i = i + 1;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
