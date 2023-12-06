
#include <unistd.h>

int count_alen(int *str)
{
	int i;

	i = 0;
	while(str[i] != '0' && str[i] != 'a')
		i++;
	return(i);
}
