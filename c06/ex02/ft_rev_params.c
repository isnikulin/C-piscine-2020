/*   Created: 2020/08/27 12:21:53 by Preposterone   */
/*   Updated: 2020/08/27 12:23:47 by Preposterone   */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int arglen;
	int i;

	arglen = 0;
	i = argc - 1;
	while (argc >= 1 && i > 0)
	{
		arglen = 0;
		while (argv[i][arglen])
			arglen++;
		write(1, argv[i], arglen);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
