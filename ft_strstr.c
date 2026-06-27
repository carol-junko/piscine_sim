#include <unistd.h>

char	*ft_strstr(char *haystack, char *needle)
{
	int		h;
	int		n;
	int		s;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	h = 0;
	while (haystack[h] != '\0')
	{
		s = h;
		n = 0;
		while (needle[n] != '\0' && haystack[s] == needle[n])
		{
			s = s + 1;
			n = n + 1;
		}
		if (needle[n] == '\0')
		{
			return (&haystack[h]);
		}
		h = h + 1;
	}
	return (NULL);
}

int	main(void)
{
	char	*name;
	char	*oc;
	char	*result;

	name = "Carolina";
	oc = "ol";
	result = ft_strstr(name, oc);
	write(1, result, 5);
	return (0);
}
