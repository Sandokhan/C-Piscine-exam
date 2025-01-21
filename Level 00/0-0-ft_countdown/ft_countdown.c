#include <unistd.h>

char ft_countdown()
{
	char number;
	number = '9';
	while (number >= '0')
	{
		write(1, &number, 1);
		number--;
	}
	write(1, "\n", 1);
	return 0;
}

#include <stdio.h>
int main(void)
{
	ft_countdown();
	return 0;
}
