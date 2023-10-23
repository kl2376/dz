#include<iostream>
#include<math.h>
int test(int a,int b, int x)
{
    if(pow(a,b)==x)
    {
        return 1;
    }
    else
    {
        printf("neverno\n");
        return 0;
    }
}
using namespace std;
int main()
{
    int x,y,b,a;
    cin>>a>>b;
    x=a;
    for(int y=1;y<b;y++)
    {
    x=x*a;
    }
    if(test(a,b,x)==1)
    {
    return x;
    }
    
}