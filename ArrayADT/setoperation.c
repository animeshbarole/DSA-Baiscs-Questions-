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
//Union -> copying element one time in a array
struct Array* Union(struct Array *arr1,struct Array *arr2)
{
int i,j,k;
i=j=k=0;
struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
while(i<arr1->length && j<arr2->length)
{
if(arr1->A[i]<arr2->A[j])
  arr3->A[k++]=arr1->A[i++];
else if(arr2->A[j]<arr1->A[i])
arr3->A[k++]=arr2->A[j++];
else 
   arr3->A[k++]=arr1->A[i++];  //Same element one time copy
   j++ ; //Increment both length. i and j
}
for(;i<arr1->length;i++)
arr3->A[k++]=arr1->A[i];
for(;j<arr2->length;j++)
arr3->A[k++]=arr2->A[j];
arr3->length=k;//K
arr3->size=10;
return arr3;
}
//Intersection   Same elemnt copy

struct Array* Intersec(struct Array *arr1,struct Array *arr2)
{
int i,j,k;
i=j=k=0;
struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
while(i<arr1->length && j<arr2->length)
{
if(arr1->A[i]<arr2->A[j])
   i++;

else if
(arr2->A[j]<arr1->A[i])
j++;

else if(arr1->A[i]==arr2->A[j])
{
   arr3->A[k++]=arr1->A[i++];  //Because in j and i have same elemnt copy one of them and increment both
   j++ ;   //Increment both length.
} 
}
//for(;i<arr1->length;i++)//
//arr3->A[k++]=arr1->A[i];    We dont need these code becuse we are not going to copy
//for(;j<arr2->length;j++)    the remainng elements. 
//arr3->A[k++]=arr2->A[j];
arr3->length=k;//K
arr3->size=10;
return arr3;
}



//Difference
struct Array* Differnce(struct Array *arr1,struct Array *arr2)
{
int i,j,k;
i=j=k=0;
struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
while(i<arr1->length && j<arr2->length)
{
if(arr1->A[i]<arr2->A[j])
  arr3->A[k++]=arr1->A[i++];
else if(arr2->A[j]<arr1->A[i]) //Because in differnce we copy only the elemnents of A
   j++;
else 
{
   i++;
   j++ ; //Increment both length. i and j
}
}
for(;i<arr1->length;i++)
arr3->A[k++]=arr1->A[i];

arr3->length=k;//K
arr3->size=10;
return arr3;
}


int main()
{
struct Array arr1={{2,9,21,28,35},10,5};
struct Array arr2={{2,3,16,21,28},10,5};
struct Array *arr3;

//arr3=Union(&arr1,&arr2);
//arr3=Intersec(&arr1,&arr2);
  arr3=Differnce(&arr1,&arr2);
Display(*arr3);
return 0;
}