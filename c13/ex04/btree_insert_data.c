/*   Created: 2020/09/04 21:19:19 by Preposterone   */
/*   Updated: 2020/09/04 22:41:08 by Preposterone   */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	if ((*root) == NULL)
		btree_create_node(item);
	else if ((*cmpf)(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->left, item, cmpf);
}
