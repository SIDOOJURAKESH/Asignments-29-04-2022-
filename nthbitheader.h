void nthbit(int,int);
void nthbit(int x,int p)
{

    if(x&(0x1<<p))
    printf("bit is set");
    else
    printf("bit is not set");
   
}