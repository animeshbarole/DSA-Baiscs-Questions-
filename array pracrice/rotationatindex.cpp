#include <iostream>
using namespace std;

void rotateatindex(int a[],int n) //Rotatebyone
{
   

   int store=a[n-1];
  
   for(int i=n-1;i>0;i--)
   {   
       
       
        
       
       
           a[i]=a[i-1];
        
   }
   a[0]=store;
}

void rotated(int a[],int n)
{
    int d;
    
    for(int i=0;i<d;i++)
    {
       rotateatindex(a,n);
    }
}

void display(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
       cout<<a[i];
   }
}

int main() {
	int t; //Number of testcases
	cin>>t;
	while(t--)  //Jb tk test cases chalana ho
	{
	    int n;  //Size of array
        cout<<"Enter the size of array"<<endl;
	    cin>>n;
        int arr[n];
          for(int i=0;i<n;i++)
          {
              cin>>arr[i];
          }
        
      
        rotateatindex(arr,n);
       rotated(arr,n);
        
        display(arr,n);


	}
	return 0;
}