/*   Created: 2020/09/03 14:00:19 by Preposterone   */
/*   Updated: 2020/09/03 19:53:49 by Preposterone   */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = ft_create_elem(data);
	temp->next = *begin_list;
	*begin_list = temp;
}
