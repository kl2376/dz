#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int count_characters(char* x, int y)
{
    int k=0;
    int i=0;
    printf("%d",k);
    while (x[i]!='\0')
    {
        if(x[i]==y)
        {
            k=k+1;
        }
        i=i+1;
    }
    printf ("%d\n",k);
    return k;
}
bool test()
{
    bool otvet=1;
    otvet=otvet&&(count_characters("welcome",'m')==1);
    otvet=otvet&&(count_characters("welcome",'e')==2);
    otvet=otvet&&(count_characters("welcome",'w')==1);
    return otvet;
}

int main()
{
    printf("%d\n",count_characters("I have become so full of knowledge...",'o'));
    printf("%d",test());
    return 0;
}