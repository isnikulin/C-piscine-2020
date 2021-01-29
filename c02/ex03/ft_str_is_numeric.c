/*   Created: 2020/08/22 19:01:24 by Preposterone   */
/*   Updated: 2020/08/22 19:09:07 by Preposterone   */

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
