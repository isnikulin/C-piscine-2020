/*   Created: 2020/08/26 19:10:04 by Preposterone   */
/*   Updated: 2020/08/26 20:37:27 by Preposterone   */

int		ft_is_prime(int nb)
{
	int n;

	if (nb <= 1)
		return (0);
	n = 2;
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
