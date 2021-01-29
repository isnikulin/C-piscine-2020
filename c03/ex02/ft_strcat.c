/*   Created: 2020/08/23 19:47:47 by Preposterone   */
/*   Updated: 2020/08/23 20:49:12 by Preposterone   */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (!dest[j])
		{
			dest[j] = src[i];
			i++;
		}
		j++;
	}
	return (dest);
}
