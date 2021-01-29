/*   Created: 2020/09/03 12:20:15 by Preposterone   */
/*   Updated: 2020/09/03 17:22:51 by Preposterone   */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	if (temp)
	{
		temp->data = data;
		temp->next = NULL;
	}
	return (temp);
}
