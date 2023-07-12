#include<iostream>
using namespace std;

void Bubble(int A[],int n)
{
    int flag;

    for(int i = 0;i<n-1;i++)
    {
        flag = 0;

        for(int j=0;j<n-1-i;j++)  //-i because on every passes we reduces the  comparision 
        {
             if(A[j]>A[j+1])
             {
                 swap(A[j],A[j+1]);
                 flag = 1;
             }
        }
        if(flag==0)
        {
            break;
        }
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
    int n = 6; //n is the size of the array 
   int A[n] = {5,6,1,4,9,2};
   Bubble(A,n);
   display(A,n);

}


