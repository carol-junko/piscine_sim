#include <unistd.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i = i + 1;
	}
	return (0);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	int		result;
	char	c;

	str1 = "hella";
	str2 = "hellb";
	result = ft_strcmp(str1, str2);
	if (result < 0)
	{
		c = '-';
	}
	else if (result > 0)
	{
		c = '+';
	}
	else
	{
		c = result + '0';
	}
	write(1, &c, 1);
	return (0);
}
