/*   Created: 2020/08/22 19:48:57 by Preposterone   */
/*   Updated: 2020/08/22 19:51:53 by Preposterone   */

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
