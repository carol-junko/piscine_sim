#include <unistd.h>
#include "helpers.h"

char	*ft_strlowcase(char	*str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] + 32;
		i = i + 1;
	}
	return (str);
}

int	main(void)
{
	char	name[20];

	fill_string(name, "CAROLINA");
	ft_strlowcase(name);
	write(1, name, 8);
	write(1, "\n", 1);
	return (0);
}
