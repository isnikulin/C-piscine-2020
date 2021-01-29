/*   Created: 2020/08/26 11:46:18 by Preposterone   */
/*   Updated: 2020/08/26 20:08:46 by Preposterone   */

int		ft_sqrt(int nb)
{
	int n;

	n = 0;
	while (n <= nb / 2)
	{
		if (n * n == nb)
			return (n);
		else if (n == nb)
			return (0);
		n++;
	}
	return (0);
}
