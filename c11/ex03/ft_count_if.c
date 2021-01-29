/*   Created: 2020/09/02 11:03:30 by Preposterone   */
/*   Updated: 2020/09/02 17:28:32 by Preposterone   */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int n;

	n = 0;
	while (*tab && length > 0)
	{
		if (f(*tab) != 0)
			n++;
		tab++;
		length--;
	}
	return (n);
}
