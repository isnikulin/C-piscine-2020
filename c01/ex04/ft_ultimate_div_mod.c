/*   Created: 2020/08/21 21:22:15 by Preposterone   */
/*   Updated: 2020/08/21 21:38:39 by Preposterone   */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int numa;
	int numb;

	numa = (int)*a / *b;
	numb = (int)*a % *b;
	*a = numa;
	*b = numb;
}
