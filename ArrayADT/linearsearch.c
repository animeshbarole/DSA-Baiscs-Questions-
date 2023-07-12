#include<stdio.h>

struct array
{
   int A[10];
   int size;
   int length;
};

void swap(int *x ,int *y)
{
    int temp;
    temp = *x;
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



int Linearsearch(struct array *arr,int key)  //We dont use '*' here because it is not channging the value.
{

    int i;
    for ( i = 0; i < arr->length; i++)
    {
        
        if(key==arr->A[i])
        {
          swap(&arr->A[i],&arr->A[i-1]);

         return i;
        }

    }
    



    return -1;
}

int movefront(struct array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(arr->A[i]==key)
        {
            swap(&arr->A[i],&arr->A[0]);
            return i; //Jis index se swap hua hai vo index retrurn ho rha hai
        }
    }
}

int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    printf("%d",movefront(&arr,4));
    Display(arr);



    
}