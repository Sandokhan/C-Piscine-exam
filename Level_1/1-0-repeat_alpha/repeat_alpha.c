#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	while(*argv[1])
	{	
		if (*argv[1] >= 'a' && *argv[1] <= 'z')
		{
			for (int i = 0; i < *argv[1] - 'a' + 1; i++)
				write(1, argv[1], 1);
		}
		else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
		{
			for (int i = 0; i < *argv[1] - 'A' + 1; i++)
				write(1, argv[1], 1);
		}
		else
		write(1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
	return (0);
}
