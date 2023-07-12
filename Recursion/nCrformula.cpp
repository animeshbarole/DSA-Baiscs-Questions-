#include<iostream>
using namespace std;
//Using Factorial we can find nCr

int fact(int n)  //Its is only one factorial function can be useful a  and b  both so dont get confused 
{
    if(n==0)
    {
        return 1;
    }

    else
    {
        return fact(n-1)*n;
    }
}

int c(int a,int b)
{
    int num;
    int dem;

    num = fact(a);
    dem = fact(b)*fact(a-b);

    return num/dem;

}


//how to find using Pascals traingle concept 

int nCr(int a,int b )
{
   if(b==0||b==a)  //as showing in digram 
   {
       return 1;
   }
   else
   {
       return nCr(a-1,b-1)+nCr(a-1,b); //As see in digram we get result by adding previous terms 
   }
    return 0;
}

int main()
{
   int a =5;
   int  b= 1;

   cout<<c(a,b)<<endl;
   cout<<nCr(a,b)<<endl;
   

}