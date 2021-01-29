/*   Created: 2020/08/27 10:31:32 by Preposterone   */
/*   Updated: 2020/08/27 12:20:30 by Preposterone   */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int arglen;

	arglen = 0;
	if (argc)
	{
		while (argv[0][arglen])
			arglen++;
		write(1, argv[0], arglen);
		write(1, "\n", 1);
	}
	return (0);
}
