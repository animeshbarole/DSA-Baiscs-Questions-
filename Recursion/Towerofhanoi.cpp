#include<iostream>
using namespace std;

//SO here we transfer the disk from A to C 
//Using recursion 
void TOH(int n,int a,int c,int b)
{
    if(n>0)
    {
       TOH(n-1,a,b,c);
       cout<<a<<"to"<<b<<endl;
       TOH(n-1,c,a,b);
    }
}

int main()
{
  int n,a,b,c;
  cin>>n;
  cin>>a;
  cin>>b;
  cin>>c;

  TOH(n,a,b,c);

}