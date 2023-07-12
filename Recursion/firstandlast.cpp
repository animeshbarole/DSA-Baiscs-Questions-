#include<iostream>
using namespace std;

int first(int a[],int n,int i,int key)
{
    if(a[i]==n) //Means the search go on till the n and we didnt find the key
    {
        return -1;
    }

    if(a[i]==key)
    {
        return i;
    }
    return first(a,n,i+1,key);//Search for next index"i+1"
}
int last(int a[],int n,int i,int key)
{
    if(a[i]==n)
    {
        return -1;
    }
    int latest =last(a,n,i+1,key);
    if(latest!=-1)  //Basically -1 is refer it means when we go at the end till n and we find occurence in between them
    {               //So it means it is not equal to -1 hence we return -1;
        return latest;
    }
    if(a[i]==key)
    {
      return i;
    }
    return  -1;
}
int main()
{
   int arr[]={4,2,1,2,4,6,7};
   cout<<first(arr,7,0,2)<<endl;
   cout<<last(arr,7,0,2)<<endl;


}