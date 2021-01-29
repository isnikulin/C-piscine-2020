/*   Created: 2020/09/01 21:36:44 by Preposterone   */
/*   Updated: 2020/09/01 21:37:09 by Preposterone   */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	while (*tab && length > 0)
	{
		f(*tab);
		length--;
		tab++;
	}
}
