/*   Created: 2020/09/04 21:14:12 by Preposterone   */
/*   Updated: 2020/09/04 21:15:51 by Preposterone   */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		btree_apply_suffix(root->left, applyf);
		btree_apply_suffix(root->right, applyf);
		applyf(root->item);
	}
}
