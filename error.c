#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int a,b,c,ka;
   int i=0;
c=9;
b=c/0;
b=5;
a=b+NaN;
c=sub(sizeof(array));

   for(i = 0; i < 10; i++)
      printf("%d ", array[i]);
      
   return 0;
}

int add()
{
int z=0;
z=15+20;

return z;
}

int sub(int p)
{
int q=0,r=15;
q=r-p;
return q;
}
