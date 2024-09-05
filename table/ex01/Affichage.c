#include <stdio.h>

int main()
{
	int	tb[5] = {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	while (tb[i])
	{
		printf("tb[%d] = %d\n",i ,tb[i]);
		i++;
	}
	return 0;
}
