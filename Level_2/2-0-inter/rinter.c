#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{	
	int i;
	
	i = 0;
	if (!str)
		return (0);
	while (str[i] != 0)
		i++;
	return (i);
}


int main( int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	if (argc == 3)
	{
		//printf("Argv[1]: %s\n", argv[1]);
		//printf("Argv[2]: %s\n", argv[2]);
		//printf("Argv[1] length: %d", ft_strlen(argv[1]));
		//printf("\nArgv[2] length: %d", ft_strlen(argv[2]));

		while (argv[1])
		{
			write(1, argv[1], 1);
			argv[1]++;
		}
		
	}
	return (0);
}
