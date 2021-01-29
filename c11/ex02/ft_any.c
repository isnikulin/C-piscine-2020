/*   Created: 2020/09/02 09:33:28 by Preposterone   */
/*   Updated: 2020/09/02 21:35:26 by Preposterone   */

int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}
