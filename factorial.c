#include <stdio.h>
#include <stdlib.h>

int main()
{

int number,j,k;
int fact = 1;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &number);

  printf("%d! = %ld\n", number, factorial(number));

  return 0;

}
int factorial(int n)
{
  int c;
  int result = 1;

  for (c = 1; c <= n; c++)
    result = result * c;

  return result;
}
