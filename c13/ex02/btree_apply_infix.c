/*   Created: 2020/09/04 20:59:55 by Preposterone   */
/*   Updated: 2020/09/04 21:06:56 by Preposterone   */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		btree_apply_infix(root->left, applyf);
		applyf(root->item);
		btree_apply_infix(root->right, applyf);
	}
}
