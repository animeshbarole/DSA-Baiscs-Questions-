#include<stdio.h>

//Easily understable by the tracing .

int fun(int n)
{
    if(n>100)
     return n-10;
     else
      return fun(fun(n+11));  //fun(fun(n+1)) in this first fun(n+1) will be found then its result
}                             //will be goes in fun(result);

int main()
{ 
    int x= 95;
    int c = fun(x);
    printf("%d",c);
    return 0 ;
}