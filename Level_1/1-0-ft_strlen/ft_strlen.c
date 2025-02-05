#include <unistd.h>

int ft_strlen( char *str)
{
	int i;
	
	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>
int main(void)
{
	char name[] = "Rhaydrick";
	printf("%s have size %d", name, ft_strlen(name));
	return (0);
}
