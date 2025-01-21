#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1;
	if (argc != 2)
	{
		write(1, "a", i);
	}
	while (*argv[1])
	{
		if (*argv[1] == 'a')
		{
			write(1, "a", 1);
			break;
		}
		argv[1]++;
	}
	write(1, "\n", 1);
	return 0;
}

