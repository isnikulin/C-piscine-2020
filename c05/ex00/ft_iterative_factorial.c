/*   Created: 2020/08/25 18:03:27 by Preposterone   */
/*   Updated: 2020/08/25 19:28:36 by Preposterone   */

int		ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
