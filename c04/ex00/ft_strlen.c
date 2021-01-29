/*   Created: 2020/08/24 12:15:34 by Preposterone   */
/*   Updated: 2020/08/24 13:13:51 by Preposterone   */

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}
