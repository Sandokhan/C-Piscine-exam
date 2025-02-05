#include <unistd.h>

int main(int argc, char **argv)
{
	char letter;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1])
	{
		if (*argv[1] >= 'a' && *argv[1] <= 'z')
		{
			letter = *argv[1] - 32;
			write(1, &letter, 1);
		}
		else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
		{
			letter = *argv[1] + 32;
			write(1, &letter, 1);
		}
		else
		{
			write(1, argv[1], 1);
		}
		argv[1]++;
	}
	write(1, "\n", 1);
	return (0);
}
