#include <unistd.h>

char	*ft_last_occurence(char *str, char c)
{
	int		i;
	int		x;

	i = 0;
	x = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			x = i;
		}
		i = i + 1;
	}
	if (x == -1)
	{
		return (NULL);
	}
	return (&str[x]);
}

int	main(void)
{
	char	c;
	char	*test;
	char	*name;

	c = 'C';
	name = "Carolina";
	test = ft_last_occurence(name, c);
	write(1, test, 10);
	return (0);
}
