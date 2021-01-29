/*   Created: 2020/08/22 18:14:40 by Preposterone   */
/*   Updated: 2020/08/22 20:54:03 by Preposterone   */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) ||
			(str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
