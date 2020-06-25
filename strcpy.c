#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(){

char a[20] = "hello world";
char b[20];
printf("%s\n", b);
ft_strcpy(b,a);
printf("%s\n",b);
return 0;

}
