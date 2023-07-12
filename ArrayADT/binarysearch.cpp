#include<stdio.h>

struct array
{
   int A[10];
   int size;
   int length;
};

void Display(struct array arr)
{
int i;
printf("\nElements are\n");
for(i=0;i<arr.length;i++)
printf("%d ",arr.A[i]);
}

//Through recursion

int RBinarysearch(int a[],int l,int h,int key)
{
    int mid = 0;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
          return RBinarysearch(a,l,mid-1,key);
         else
           return RBinarysearch(a,mid+1,h,key);

    }

    return 0;
}


int BinarySearch(struct array arr,int key)
{ 
    int l,h,mid;
    l=0;
    h=arr.length-1;  //Both are applicable lenght -1 and length both are valid.

    if(l<=h)
    {
        mid = (l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
             h = mid-1;
        else 
            l=mid +1;    
    }
    


   return -1;
}



   

int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    printf("%d\n",BinarySearch(arr,4));
   // printf("%d\n",RBinarysearch(arr.A,0,arr.length,3));
    Display(arr);



    
}