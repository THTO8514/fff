#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch = 'c';
    char s[] = "Language";
    char sen;
scanf("%c,%s,%[\nWelcome To C!!\n]%*c", &ch,&s,&sen);
printf("%c\n,%s\n,%c\n", ch,s,sen);
    return 0;
}
