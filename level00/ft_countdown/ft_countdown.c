#include <unistd.h>
#include <stdio.h>

char ft_countdown()
{
	char i;

	i = '9';
	while( i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
int main()
{
	ft_countdown();
	return (0);
}
