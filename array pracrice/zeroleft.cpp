#include<iostream>
using namespace std;

//Put all the zeros in left

//We are doing opposite of question 
//We do all the non zero value in right

void move(int a[],int n)
{
    int i = 0; //Index intialisation  we put non zero values here;

    for(int j = 0;j<n;j++)
    {
        if(a[j]!=0)
        {
            swap(a[j],a[i]);
            i++; //Going for next index to put non zero element.
        }
    }
}

void display(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int n = 5;
    int A[n]={0,0,1,2,3};
    move(A,n);
    display(A,n);


   return 0;
}