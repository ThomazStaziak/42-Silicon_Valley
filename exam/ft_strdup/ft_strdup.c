#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}	

char *ft_strdup(char *src)
{
	char *dest;
	int len;
	int i;
	
	i = 0;
	len = ft_strlen(src);
	if(!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char *teste;

	teste = "thomaz";
	printf("%s\n", ft_strdup(teste));
}
