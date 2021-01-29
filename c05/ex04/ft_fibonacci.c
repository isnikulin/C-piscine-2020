/*   Created: 2020/08/26 16:22:48 by Preposterone   */
/*   Updated: 2020/08/26 19:02:09 by Preposterone   */

int		ft_solve_fib(int index)
{
	if (index <= 2)
		return (1);
	else if (index > 0)
		return (ft_solve_fib(index - 1) + ft_solve_fib(index - 2));
	return (0);
}

int		ft_fibonacci(int index)
{
	int n;

	n = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else
		n = ft_solve_fib(index);
	return (n);
}
