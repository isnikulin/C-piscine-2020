/*   Created: 2020/08/27 20:28:31 by Preposterone   */
/*   Updated: 2020/08/27 21:20:15 by Preposterone   */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	return (ft_strcpy((char*)malloc(ft_strlen(src) + 1), src));
}
