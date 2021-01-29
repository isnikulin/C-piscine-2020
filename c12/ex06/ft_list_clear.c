/*   Created: 2020/09/03 21:35:04 by Preposterone   */
/*   Updated: 2020/09/03 21:55:10 by Preposterone   */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *temp;

	while (begin_list)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		free_fct(temp->data);
		free(temp);
	}
}
