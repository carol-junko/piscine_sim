#include <unistd.h>
#include <stdlib.h>

int	countdigits(int n)
{
	int		len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len = len + 1;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		size;
	int		is_negative;
	char	*number;

	size = countdigits(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
	}
	number = (char *)malloc(size + 1 + is_negative);
	if (number == NULL)
	{
		return (NULL);
	}
	if (n < 0)
	{
		n = n * -1;
		number[0] = '-';
		size = size + 1;
	}
	number[size] = '\0';
	size = size - 1;
	while (n > 0)
	{
		number[size] = (n % 10) + '0';
		n = n / 10;
		size = size - 1;
	}
	return (number);
}

int	main(void)
{
	char	*result;

	result = ft_itoa(-41);
	write(1, result, 6);
	return (0);
}
