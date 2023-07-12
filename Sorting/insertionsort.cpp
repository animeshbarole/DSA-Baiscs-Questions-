#include<iostream>
using namespace std;


void insertsort(int A[],int n)
{
    int x,j;
    for(int i = 1;i<n;i++)
    {
        x = A[i];
        j = i-1;

        while(j>-1&&A[j]>x)
        {
            A[j+1]= A[j];
            j--;
        }
        A[j+1] =x;
    }
}

void display(int A[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
   int A[] = {5,7,1,3,8};
   insertsort(A,5);
   display(A,5);

}