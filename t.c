#include <unistd.h>

char print(char c)
{
write(1, &c, sizeof(char));
return 0;

}

void print_word(void)
{
 char a ="hello";
 char b ="world!";
 print(a);
 print(' ');
 print(b);
}

int main()
{
print_word();
return 0;

}
