/*   Created: 2020/08/23 20:51:43 by Preposterone   */
/*   Updated: 2020/08/23 21:08:00 by Preposterone   */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] && nb)
	{
		if (!dest[j])
		{
			dest[j] = src[i];
			i++;
			nb--;
		}
		j++;
	}
	return (dest);
}
