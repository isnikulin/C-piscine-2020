/*   Created: 2020/08/30 20:31:52 by Preposterone   */
/*   Updated: 2020/08/30 20:31:54 by Preposterone   */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
