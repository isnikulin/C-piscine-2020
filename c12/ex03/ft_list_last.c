/*   Created: 2020/09/03 19:23:20 by Preposterone   */
/*   Updated: 2020/09/03 19:54:27 by Preposterone   */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *temp;

	temp = begin_list;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}
