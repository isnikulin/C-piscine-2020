/*   Created: 2020/08/22 11:48:20 by Preposterone   */
/*   Updated: 2020/08/22 17:59:23 by Preposterone   */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
