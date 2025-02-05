#include <unistd.h>
#include <stdio.h>

void aff_a(char *str)
{
	while(*str)
	{
		if(*str == 'a')
		{
			write(1, "a", 1);
			break ;
		}
		str++;
	}
	return (0);
}
int main(int ac, char **av)
{
	if(ac != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}	
	aff_a(av[1]);
	write(1, "\n", 1);
	return (0);
}
