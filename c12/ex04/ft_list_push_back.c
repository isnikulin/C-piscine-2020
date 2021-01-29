/*   Created: 2020/09/03 19:30:22 by Preposterone   */
/*   Updated: 2020/09/03 19:54:29 by Preposterone   */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_last;
	t_list *temp;

	new_last = ft_create_elem(data);
	temp = *begin_list;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_last;
}
