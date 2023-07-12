#include<iostream>
using namespace std;

struct Array
{
    int *a;  // Creating an array in heap
    int size; // size kya hai array ka 
    int lenght; //How many number aapne daale hai 
};

void display(struct Array arr)
{
  for(int i=0;i<arr.lenght;i++)
  {
    cout<<arr.a[i]<<endl;
  }
}

int main()
{
    struct Array arr;
    cout<<"Enter the size of array"<<endl;
    cin>>arr.size;
    arr.a=new int[arr.size];
   arr.lenght = 0;
    int n;
    cout<<"Enter the numbers of numbers in the array where our feeling stop"<<endl;
    cin>>n; 
    arr.lenght=n;//Numeber of number means how many  number which are going to put ;
    for(int i=0;i<n;i++)
    {
         cin>>arr.a[i];  //Read the element in an array 
    }
   // arr.lenght = n;
    display(arr);

//return 0;
}