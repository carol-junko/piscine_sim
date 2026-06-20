#include <unistd.h>
#include "helpers.h"

char	*ft_strupcase(char	*str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	name[20];

	fill_string(name, "carOlinA");
	ft_strupcase(name);
	write(1, name, 8);
	write(1, "\n", 1);
	return (0);
}
