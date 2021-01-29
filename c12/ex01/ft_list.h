/*   Created: 2020/09/03 13:19:08 by Preposterone   */
/*   Updated: 2020/09/03 21:49:00 by Preposterone   */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef	struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list			*ft_create_elem(void *data);

#endif
