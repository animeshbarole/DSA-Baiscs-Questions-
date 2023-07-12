#include<iostream>
using namespace std;

//passing an array and n index for that 

void insert(int A[],int n)
{
     
      int i = n;
       int temp = A[i];

      while(i>1&&temp>A[i/2])
      {
          A[i] = A[i/2];
          i = i/2;
      }
      A[i] = temp;
}

int Delete(int A[],int n)
{
  
   int x,i,j,val;
    val = A[1];
   x = A[n]; //this is for stroing the value at the end of the array
   swap(A[1],A[n]);
   i = 1;
  
   j = i*2;

   while(j<n-1) //size of the array is reduced 
   {
       if(A[j+1]>A[j])
       {
           j=j+1;
       }

       if(A[j]>A[i])
       {
           swap(A[j],A[i]);
       }
       else
         break;
   }

return val;

}

void display(int A[],int n)
{
    for(int i = 1;i<=n-1;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n = 8;
    int a[8] = {0,10,20,30,25,5,40,35};

    for(int i =2;i<=n-1;i++)
    {
        insert(a,i);
    }

  cout<<"Deleted Elemet is "<<Delete(a,7)<<" "<<endl;
  cout<<"Deleted Elemet is "<<Delete(a,6)<<" "<<endl;
   
   
   display(a,n);
    
  //  for(int i =1;i<=5;i++)
  //  {
  //      cout<<a[i]<<" ";
  //  }
  //  cout<<endl;
   

    
}