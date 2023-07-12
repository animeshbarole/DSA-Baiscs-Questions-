#include<iostream>
using namespace std;

int fact(int x)
{
    if(x==0)
    {
       return 1;
    }
    else
    {
        return fact(x-1)*x;
    }
}


int fact1(int c)
{
    int f = 1;
    for(int i=1;i<=c;i++)
    {
        f = f*i;
        //return f;
    }
    return f ;
  
}

int main()
{
   int a = 5;
   cout<<fact1(a)<<endl;

}