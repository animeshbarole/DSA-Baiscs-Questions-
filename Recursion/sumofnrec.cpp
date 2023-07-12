#include<iostream>
using namespace std;

int sum(int x)
{
    if (x==0)
    {
        return 0;
    }
    else 
     return sum(x-1)+x; //Basically sum(x-1) is the sum from 1 to (n-1)th term and we add n for the sum of nth term 
    
}

//same example using loop

int sum1(int c)
{
    int s = 0;
    for(int i=1;i<=c;i++)
    {
        s = s+i;
      //  return ;
    
    }
    return s;
}


int main()
{
    int a = 5;
    cout<<sum(a)<<endl;
    cout<<sum1(a)<<endl;
    
}


