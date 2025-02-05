#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i]!= '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>

int main(void)
{
	char src[] = "Hello!";
	char dest[20];

	printf("Src: %s\n Dest: %s - Initial state\n", src, dest);
	printf("Dest: %s - final state", ft_strcpy(dest, src));
	return(0);
	
}
