#include <unistd.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*message;
	char	*str1;

	message = "hello";
	ft_strcpy(str1, message);
	write(1, str1, 6);
	return (0);
}
