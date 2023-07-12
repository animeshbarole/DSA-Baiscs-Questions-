#include<iostream>
using namespace std;


void Selection(int A[],int n)
{
    int j,k;

    for(int i = 0;i<n-1;i++)  //n-1 because we compare the element by its next index.
    {
       for(j = k = i;j<n;j++)
       {
           if(A[j]<A[k])
           
               k = j; //make k point on j which we get smallest element
           
       } 
     swap(A[i],A[k]);
       
    }
}

void display(int A[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
   int A[] = {5,7,8,1,4,9};
   Selection(A,6);
   display(A,6);
}