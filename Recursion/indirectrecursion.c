#include<stdio.h>
void funB(int n); //You have to declare it otherwise it shows error
void funA(int n)
{
    if(n>0)
    {
        printf("%d \n",n);
        funB(n-1);
    }
    
}

void funB(int n)
{
    if(n>1) //if 0 then "n/2" is not  valid which is wrong
    {
        printf("%d \n",n);
        funA(n/2);
    }
    
}


int main()
{
    int a= 20;
    funA(a);

    return 0 ;
}