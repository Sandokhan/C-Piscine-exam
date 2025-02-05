#include <unistd.h>

void is_even(void)
{
	char i;
	
	i = '0';
	while (i <= '9')
	{
		if(((i - '0') % 2) != 0)
			write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
int main()
{
	is_even();
	return (0);
}
