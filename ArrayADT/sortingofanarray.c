#include<stdio.h>

struct array
{
   int A[10];
   int size;
   int length;
};


void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}

void Display(struct array arr)
{
int i;
printf("\nElements are\n");
for(i=0;i<arr.length;i++)
printf("%d ",arr.A[i]);
}

int Checksort(struct array arr) //Int because we have to return true or false
{
    int i;
    for(i=0;i<arr.length-1;i++) //Length -1 becuse last i.e lenght is not check its length element 
   { 
     if(arr.A[i]>arr.A[i+1])
    
        return 0;
   }
    return 1;
}

void Insersort(struct array *arr,int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
    
        return;
   
   while(i>=0 && arr->A[i]>x)
   {
       arr->A[i+1]=arr->A[i];
       i--;
   }
   arr->length++;
   arr->A[i+1]=x; //for putting the value 
}

void Arrange(struct array *arr)
{
    int i;
    int j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        if(arr->A[i]<0)
          i++;
        if(arr->A[j]>=0)
          j--;
       swap(&arr->A[i],&arr->A[j]);


    }
}



int main()
{
    struct array arr={{-2,3,4,-6,8},10,5};
   // printf("%d",Insersort(&arr,5)); //Because we dont have to print it , it is basic alogrithm function so call it
   // Insersort(&arr,5);
   // printf("%d",Checksort(arr));
   Arrange(&arr);
   Display(arr);



    
}