#include<iostream>
using namespace std;

//With the help of recursion but it takes more time i.e order of O(n^2)
int fib(int n)
{
    int s;
    if(n<=1)
    {
     return n;
    }
    else
    {
      s=fib(n-2)+fib(n-1); //the nth term is obtained by adding previous 2 terms 
      return s;
    }
    
}

//with the help of loop

int fun(int y)
{
    int t0=0;
    int t1=1;
    int s;

    if(y<=1)
       return y; 
    for (int  i = 2; i <=y; i++)

    {
        s =t0+t1;
        t0=t1;
        t1=s;

    }
       
   return s;
}

 //It reduces time complexity with O(n)
int F[10]; //We have to intialise array we maintain it as a static 

int tfib(int c)
{

    if(c<=1)
    {  //If the  value is small then we are going to store the value 
     F[c]=c;
     return c;
    } 
     else
     {
          if(F[c-2]==-1)  //We the value of array is -1 then we are going to replace it with the function 
            F[c-2]=tfib(c-2); //  
          if(F[c-1]==-1)
            F[c-1]=tfib(c-1);  
             F[c]=F[c-2]+F[c-1]; //Just initalising arrays 
        return F[c-2]+F[c-1];

     } 
   


}

int main()
{
    for(int i=0;i<10;i++)
    {
       F[i]=-1;
    }
   
    
   int a =6;   
   cout<<fib(a)<<endl;
   cout<<fun(a)<<endl;
   cout<<tfib(a)<<endl;
}
