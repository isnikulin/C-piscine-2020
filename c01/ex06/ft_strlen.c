/*   Created: 2020/08/21 22:35:58 by Preposterone   */
/*   Updated: 2020/08/21 22:43:44 by Preposterone   */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
