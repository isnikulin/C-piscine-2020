/*   Created: 2020/08/27 11:40:11 by Preposterone   */
/*   Updated: 2020/08/27 12:20:05 by Preposterone   */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int arglen;
	int i;

	arglen = 0;
	i = 1;
	while (argc >= 1 && i < argc)
	{
		arglen = 0;
		while (argv[i][arglen])
			arglen++;
		write(1, argv[i], arglen);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
