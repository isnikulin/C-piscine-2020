/*   Created: 2020/08/22 19:09:52 by Preposterone   */
/*   Updated: 2020/08/22 19:22:08 by Preposterone   */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
