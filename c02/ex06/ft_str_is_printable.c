/*   Created: 2020/08/22 19:54:20 by Preposterone   */
/*   Updated: 2020/08/22 20:09:20 by Preposterone   */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
