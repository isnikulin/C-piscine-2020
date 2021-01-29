/*   Created: 2020/08/21 21:42:04 by Preposterone   */
/*   Updated: 2020/08/21 22:14:38 by Preposterone   */

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}
