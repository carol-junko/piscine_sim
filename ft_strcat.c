#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		x;
	char	*c;

	i = 0;
	x = 0;
	c = (char *)malloc(ft_strlen(dest) + ft_strlen(src) + 2);
	if (c == NULL)
	{
		return (NULL);
	}
	while (dest[i] != '\0')
	{
		c[i] = dest[i];
		i = i + 1;
	}
	c[i] = ' ';
	while (src[x] != 0)
	{
		i = i + 1;
		c[i] = src[x];
		x = x + 1;
	}
	c[i + 1] = '\0';
	return (c);
}

int	main(void)
{
	char	*name = "Carol";
	char	*sur = "Aoki";
	int		len = ft_strlen(name) + ft_strlen(sur) + 2;
	char	*s = ft_strcat(name, sur);
	write(1, s, len);
	return (0);
}
