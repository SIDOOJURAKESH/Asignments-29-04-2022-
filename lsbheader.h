#include<stdio.h>
void LSB_BIT(int);
void LSB_BIT(int n)
    {
    if(n & 1 == 1)
    {
        printf("LSB bit is set\n");
    }
    else
    {
        printf("LSB bit is not set");
        
    }

}
