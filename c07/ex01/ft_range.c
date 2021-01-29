/*   Created: 2020/08/27 21:18:08 by Preposterone   */
/*   Updated: 2020/08/28 21:09:21 by Preposterone   */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	long int	nelements;
	int			*array;
	int			i;

	if (max <= min)
		array = (int*)malloc(-1);
	i = 0;
	nelements = (long)max - (long)min;
	array = (int*)malloc(nelements * sizeof(int));
	while (nelements)
	{
		array[i] = min + i;
		i++;
		nelements--;
	}
	return (array);
}
