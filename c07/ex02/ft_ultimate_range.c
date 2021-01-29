/*   Created: 2020/08/28 21:09:46 by Preposterone   */
/*   Updated: 2020/08/28 23:27:57 by Preposterone   */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	nelements;
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = (int*)malloc(-1);
		return (0);
	}
	i = 0;
	nelements = max - min;
	*range = (int*)malloc(nelements * sizeof(int));
	while (nelements)
	{
		*range[i] = min + i;
		i++;
		nelements--;
	}
	return (sizeof(*range));
}
