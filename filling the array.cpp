#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void random(int*x, int n)
{
    for(int i=0;i<10;i++)
    {
        x[i]=rand()%10;
    }
}
void array(int*x, int n)
{
    for(int i=0;i<10;i++)
    {
        printf("%d", *(x+i));
    }
}

int main()
{
    srand(time(0));
    int x[10];
    random(x,10);
    array(x,10);
    return 0;
    
}