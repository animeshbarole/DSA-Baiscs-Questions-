#include<iostream>
using namespace std;

void merging(int a[],int b[],int n,int m)
{
    int i,j,k;
    i=j=k=0;
   
    int c[n+m];
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else
        {
            c[k++]=a[i++];
            j++;
        }

       while(i<n)
       {
           c[k++]=a[i++];
       }
       while (j<n)
       {
            c[k++]=b[j++];
       }
       

     }
     cout<<c[n+m]<<" ";
}



int main()
{
    int a,b;
    a=5;
    b=5;
  int A[a]={1,2,3,4,5};
  int B[b]={5,6,7};
  merging(A,B,a,b);
  

}