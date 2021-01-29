/*   Created: 2020/08/22 20:10:41 by Preposterone   */
/*   Updated: 2020/08/22 21:02:54 by Preposterone   */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 & str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
