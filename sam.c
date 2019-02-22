#include<stdio.h>
void main()
{
int *ptr;
ptr=fetch();
printf("Value=%d",*ptr);
}
int *fetch()
{
int val;
val=100;
return &val;
}
