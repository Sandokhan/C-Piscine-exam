#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	if (!str)
		return (0);
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
int main(void)
{
	char s1[] = "Rhaydrick";
	printf("Custom: %d\n", ft_strlen(s1));
	return (0);
}
