#include <stdio.h>
void nthbit(int,int);
int main()
{
    int x,p;
    
    printf("enter the x value: ");
    scanf("%d",&x);
    printf("enter to chek bit: ");
    scanf("%d",&p);
    nthbit(x,p);
     return 0;
}
void nthbit(int x,int p)
{

    if(x&(0x1<<p))
    printf("bit is set");
    else
    printf("bit is not set");
   
}
