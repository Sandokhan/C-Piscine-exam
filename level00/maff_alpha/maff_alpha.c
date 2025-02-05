#include <unistd.h>

void maff_alpha(void)
{
	char letter;
	char uletter;

	letter = 'a';
	while (letter <= 'z')
	{
		if( letter % 2 != 0)
			write(1, &letter, 1);
		else
		{
			uletter = letter - 32;
			write(1, &uletter, 1);
		}	
	letter++;
	}
	write(1, "\n", 1);
}
int main(void)
{
	maff_alpha();
	return (0);
}
