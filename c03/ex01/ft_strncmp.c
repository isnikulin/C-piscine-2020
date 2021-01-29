/*   Created: 2020/08/23 17:24:55 by Preposterone   */
/*   Updated: 2020/08/23 19:46:49 by Preposterone   */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	c1 = (unsigned char)s1[i];
	c2 = (unsigned char)s2[i];
	while (c1 == c2 && n)
	{
		if (!c1)
			return (c1 - c2);
		n--;
		i++;
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
	}
	return (c1 - c2);
}
