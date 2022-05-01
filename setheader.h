#include<stdio.h>
void set(int,int);
void set(int x,int p)
{
x=x|(0x1<<p);
printf("after set:%d\n",x);
}