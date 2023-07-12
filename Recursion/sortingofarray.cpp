#include<iostream>
using namespace std;
bool sorted(int a[],int m) //Here m is the size of array
{
    if(m==1) //Because if there only one element in the array then it is sorted
    return true;

    bool assorted= sorted(a+1,m-1);
    return (a[0]<a[1]&& assorted);

}

int main()
{
    int arr[]={1,2,3,4,5,6};
    cout<<sorted(arr,5);//5 because array start from zero 
    
    
   
   
   
   
 


}