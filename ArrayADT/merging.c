#include<stdio.h>
#include<stdlib.h>

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

struct array* merging(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3 = (struct array *)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
           arr3->A[k++]=arr1->A[i++];
        else 
            arr3->A[k++]=arr3->A[j++];   
    }

    for (;i<arr1->length;i++)
    {
         arr3->A[k++]=arr1->A[i];
    }    
    for (;j<arr2->length;j++)
    {
         arr3->A[k++]=arr2->A[j];  
    }
    arr3->length = k;
    arr3->size =10;        
         
    return arr3;  
}

int main()
{
  struct array arr1 = {{2,3,6,9,12},10,5};
  struct array arr2 = {{4,5,8,10,11},10,5};
  struct array *arr3; //Basically it is created in heap so we define it in the function by acceseinh through main function
  arr3 = merging(&arr1,&arr2);
  Display(*arr3);


  return 0;
}