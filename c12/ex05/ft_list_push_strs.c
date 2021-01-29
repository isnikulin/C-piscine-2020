/*   Created: 2020/09/03 20:17:22 by Preposterone   */
/*   Updated: 2020/09/03 21:55:03 by Preposterone   */

#include "ft_list.h"

t_list		*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin;
	t_list	*point;
	int		i;

	begin = NULL;
	point = NULL;
	i = 0;
	if (size > 0)
	{
		while (i < size && strs[i])
		{
			begin = point;
			point = ft_create_elem(strs[i]);
			point->next = begin;
			i++;
		}
	}
	return (point);
}
