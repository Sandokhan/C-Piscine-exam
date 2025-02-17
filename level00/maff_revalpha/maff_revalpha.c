#include <unistd.h>

void maff_revalpha()
{
	char letter;
	char lletter;

	letter = 'z';
	while (letter >= 'a')
	{
		if (!(letter % 2))
		{
			write(1, &letter, 1);
		}
		else
		{
				lletter = letter - 32;
				write(1, &lletter, 1);
		}
		letter--;
	}
	write(1, "\n", 1);	
}
int main()
{
	maff_revalpha();
	return (0);
}
