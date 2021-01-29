/*   Created: 2020/08/29 13:34:32 by Preposterone   */
/*   Updated: 2020/09/02 21:09:29 by Preposterone   */

#ifndef FT_H
# define FT_H
# include <unistd.h>

# define ERR_DIV_BY_ZERO	"Stop : division by zero\n"
# define ERR_MOD_BY_ZERO	"Stop : modulo by zero\n"

void		ft_putchar(char c);
void		ft_swap(int *a, int *b);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);

long int	ft_add(long int a, long int b);
long int	ft_minus(long int a, long int b);
long int	ft_division(long int a, long int b);
long int	ft_multiplication(long int a, long int b);
long int	ft_modulo(long int a, long int b);

long int	ft_exceptions(long int nb);
long int	ft_nbrlen(long int nb);
void		ft_putnbr(long int nb);

#endif
