#include <unistd.h>

char	*ft_strcat2(char	*dest, char	*src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x = x + 1;
	}
	dest[x] = ' ';
	x = x + 1;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y = y + 1;
		x = x + 1;
	}
	dest[x] = '\0';
	return (dest);
}

int	main(void)
{
	char	*s;
	char	*name;
	char	*surname;
	char	full_name[12];
	int		i;

	name = "Carol";
	surname = "Aoki";
	i = 0;
	while (name[i] != '\0')
	{
		full_name[i] = name[i];
		i = i + 1;
	}
	full_name[i] = '\0';
	s = ft_strcat2(full_name, surname);
	write(1, s, 12);
	return (0);
}
