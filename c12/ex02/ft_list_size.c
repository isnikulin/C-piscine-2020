/*   Created: 2020/09/03 19:10:23 by Preposterone   */
/*   Updated: 2020/09/03 19:54:14 by Preposterone   */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		n;
	t_list	*temp;

	n = 0;
	temp = begin_list;
	while (temp)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
