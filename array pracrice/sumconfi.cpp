#include<iostream>
using namespace std;
int main()
{
//    int n=6;
//    int max_sum=0;
//    int arr[n]={1,3,4,5,6};
//    for(int i=0;i<n;i++)
//    {
//        arr[i]=arr[i]*i;
//        max_sum=max_sum+arr[i];
//    }
//
//    cout<<max_sum<<endl;


//Rotate array 
//{1,2,3,4,5}
//{2,3,4,5,1}

int n=6;
int arr[6]={1,2,3,4,5,6};
int t = arr[0];
for(int i=0;i<n-1;i++)
{
  arr[i]=arr[i+1];
  
}
arr[n-1]=t;
 
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }


}