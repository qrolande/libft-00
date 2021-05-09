#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;
	int		i;

	l = 0;
	if (len == 0 && haystack == 0)
		return (0);
	if (needle[l] == '\0')
		return ((char *)haystack);
	while (haystack[l] != '\0' && l < len)
	{
		i = 0;
		if (haystack[l] == needle[i])
		{
			while (len > i + l && needle[i] != '\0' && haystack[l + i] != '\0'
				&& haystack[l + i] == needle[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)haystack + l);
		}
		l++;
	}
	return (NULL);
}
