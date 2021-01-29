/*   Created: 2020/08/22 17:16:25 by Preposterone   */
/*   Updated: 2020/08/22 18:13:06 by Preposterone   */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (dest[i])
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
