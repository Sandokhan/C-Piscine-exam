#include <unistd.h>

int main(void)
{
	char letter;
	char upperletter;

	letter = 'z';
	while (letter >= 'a')
	{
		if (letter % 2 == 0)
		{
			write(1, &letter, 1);
		}
		else
		{
			upperletter = letter - 32;
			write(1, &upperletter, 1);
		}
		letter--;
	}
	write(1, "\n", 1);
	return (0);
}
