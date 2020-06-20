#include <unistd.h>

int ft_putchar(int c)
{
write(1, &c, 1);
return 0;

}


void ft_print_comb(void)
{
int a;
int b;
int c;
a = 48;
while(a<=55)
{
b = a+1;
while (b<=56)
{
c=b+1;
while(c<=57)
{
ft_putchar(a);
ft_putchar(b);
ft_putchar(c);
ft_putchar(',');
c++;
}
b++;
}
a++;
}
}

int main()
{
ft_print_comb();
return 0;
}
