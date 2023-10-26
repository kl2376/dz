#include <iostream>
using namespace std;
int main()
{
    int a;
    int b=1;
    cin>>a;
    while(a!=0)
    {
        b=b*(a%10);
        a=(a-a%10)/10;
    }
    return b;
}