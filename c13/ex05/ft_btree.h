/*   Created: 2020/09/04 20:00:15 by Preposterone   */
/*   Updated: 2020/09/04 20:27:50 by Preposterone   */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;

#endif
