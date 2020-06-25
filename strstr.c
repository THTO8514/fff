#include <stdio.h>

char *ft_strstr(char *dest, char *src)
{
	int i;
	i = 0;
	while (dest[i] != '\0')
	{
	 while(dest[i]=src[i]){
	dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
}
int main(){

char a[19] = "hello world people";
char b[12] = "peo";
char *c;
c = ft_strstr(a,b);
	printf("%s\n", c);
	return 0;
}
