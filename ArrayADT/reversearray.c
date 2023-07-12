#include<stdio.h>
#include<stdlib.h>

struct Array
{
int A[10];
int size;
int length;
};

void Display(struct Array arr)
{
int i;
printf("\nElements are\n");
for(i=0;i<arr.length;i++)
printf("%d ",arr.A[i]);
}

//Copying the element in one another thats one way to copy the element
void Reverse(struct Array *arr)
{
     int *B;
     int i,j;
     B=(int*)malloc(arr->length*sizeof(int));
     for(i=arr->length-1,j=0;i>=0;i--,j++)
     {
         B[j]=arr->A[i];//First loop for copying the element 
     }

     for(i=0;i<arr->length;i++) //Both have same index
     {
         arr->A[i]=B[i];
     }


}

//Another way to copy the element is swapping 
void Reverse2(struct Array *arr)
{
    //int *B; //We dont have to make b becuze we are solving in an array 
    int i,j;
   // B=(int *)malloc(arr->length*sizeof(int));

    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
          int temp;
          temp=arr->A[i];
          arr->A[i]=arr->A[j];
          arr->A[j]= temp;
    }
}

int main()
{
struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
Reverse2(&arr);
Display(arr);
return 0;
}