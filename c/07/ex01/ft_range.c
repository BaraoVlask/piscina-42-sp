#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}
