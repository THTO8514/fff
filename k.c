#include <stdio.h>

void ft_ft(int *nbr) {
int a;
a = 42;
*nbr = a;

}

int main(){
 
     int *nbr;
	ft_ft(nbr);
	printf("%d\n",nbr);
	return 0;
}

/* 
 void  ft_putint(int i)
{
  printf("%d",i);
}

void  ft_ft(int *nbr)
{

  *nbr = 42;
}

int main(void)
{
  int c;
  
  c = 0;
  ft_ft(&c);
  ft_putint(c);
  return (0);
}*/
