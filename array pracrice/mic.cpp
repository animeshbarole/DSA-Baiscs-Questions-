#include<iostream>
using namespace std;

void display(int a[],int length)
{
    for (int i = 0; i <length; i++)
    {
        /* code */
        cout<<a[i]<<endl;
    }
    
}

void swapalernate(int a[],int length)
{
    for(int i=0;i<length;i+2)
    {
        if(a[i]<length)
        {
            swap(a[i],a[i+1]);
        }
    }
}

int main()
{
    int even[8]={1,2,4,6,7,8,9,6};
    int odd[5]={23,55,67,88,89};
    swapalernate(even,8);
    display(even,8);

}