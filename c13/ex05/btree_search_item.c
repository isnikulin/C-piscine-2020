/*   Created: 2020/09/04 22:29:13 by Preposterone   */
/*   Updated: 2020/09/04 22:40:54 by Preposterone   */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
						int (*cmpf)(void *, void *))
{
	void *ret;

	if (root == NULL)
		ret = NULL;
	else if (cmpf(data_ref, root->item) == 0)
		return (root);
	else
	{
		btree_search_item(root->left, cmpf);
		btree_search_item(root->right, cmpf);
	}
	return (ret);
}
