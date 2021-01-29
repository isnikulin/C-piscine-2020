/*   Created: 2020/09/04 20:01:14 by Preposterone   */
/*   Updated: 2020/09/04 20:58:53 by Preposterone   */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		applyf(root->item);
		btree_apply_prefix(root->left, applyf);
		btree_apply_prefix(root->right, applyf);
	}
}
