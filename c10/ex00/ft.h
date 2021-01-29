/*   Created: 2020/08/29 13:34:32 by Preposterone   */
/*   Updated: 2020/08/31 19:46:36 by Preposterone   */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# define ERR_NO_ARG	"File name missing.\n"
# define ERR_TOO_MANY	"Too many arguments.\n"
# define ERR_CANT_READ	"Cannot read file.\n"
# define ERR_UNKNOWN	"\e[1;31m Unknown error.\e[0m\n"

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
