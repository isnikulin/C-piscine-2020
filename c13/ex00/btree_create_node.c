/*   Created: 2020/09/04 17:54:34 by Preposterone   */
/*   Updated: 2020/09/04 20:50:26 by Preposterone   */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *temp;

	temp = (t_btree*)malloc(sizeof(t_btree));
	if (temp == NULL)
		return (NULL);
	temp->item = item;
	temp->left = NULL;
	temp->right = NULL;
	return (temp);
}
