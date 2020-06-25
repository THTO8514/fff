#include <stdio.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}


int main(){
int ab = 12;

char a[20] = "hello world";
char b[20];
printf("%s\n", b);
ft_strncpy(b,a,ab);
printf("%s\n",b);
return 0;

}
