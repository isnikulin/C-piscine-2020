/*   Created: 2020/08/21 22:45:18 by Preposterone   */
/*   Updated: 2020/08/21 23:07:39 by Preposterone   */

void	ft_rev_int_tab(int *tab, int size)
{
	int array[size];
	int index;

	index = 0;
	while (size - 1  >= 0)
	{
		*tab[size] = array[index];
		index++;
		size--;
	}
}
