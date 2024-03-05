#include <stdio.h>

int main()
{
    int c;
    int a;
    for( a = 1; a <= 10; a++)
    {
      for( c = 'a'; c <= 'z'; c++)
      {
    putchar(c); 
      }
      putchar('\n');
    }
}