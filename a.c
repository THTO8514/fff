#include <unistd.h>

int ft_putchar(char c)
{
write(1, &c, 1);
return 0;
}

void ft_print_comb2(void)
{
int a;
int b;
int c;
int d;
a = 48;
while(a<=57)
{
b = 48;
while(b<=56)
{
c = 48;	
while(c<=57)
{
d = 49;
while(d<=57)
{

ft_putchar(a);
ft_putchar(b);
ft_putchar(' ');
ft_putchar(c);
ft_putchar(d);
ft_putchar(',');
ft_putchar(' ');
d++;
}
c++;
}
b++;
}
a++;
}
}

int main()
{
ft_print_comb2();
return 0;
}
