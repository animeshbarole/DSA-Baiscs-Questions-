#include<iostream>
using namespace std;

class array
{
    private:
    int *A;//We want decalre in heap becuse we are not sure about memory
    int size;
    int lenght;
    
    public:
      array()
      {
          int size=0;
          int length=0;
          A=new int[size];//It is an array created in heap with the help of pointer A
      }

      array(int sz)
      {
          size=sz;
          lenght = 0; //Length is intialise with zero becuse we dont know how many elements 
                     // we are going to enter .
          A = new int[size]; //initalise array in heap
      }

      void insert(int index,int n)
      {
          if(index>=0 && index<size)
          {
          for(int i=lenght;i>index;i--)
          {
              A[i]=A[i-1];
          }
            A[index]=n;
            lenght++; //Because the size of an array is going to increas    
         }
      }
      int linearsearch(int k)//We have to pass key only because array is alerady created 
      {
         for(int i=0;i<lenght;i++)
         { 
            if(A[i]==k)
            {
                return i;
            }

         } 
         return -1; //We are not going to find result than we have to return -1;
      }

      void display()
      {
          for(int i=0;i<lenght;i++)
          {
             cout<<A[i];
          }
      }
};

int main()
{
    array *arr1;//We have to create pointer for allocation of object in heap so through that 
                //We can call contructor which is allocated in heap
   // arr1=new array(s);
     int *a;            //we can call
    int l;
    int i,n;
    int s;
    int key;
    cout<<"enter the size of an array"<<endl;
    cin>>s;
    arr1=new array(s);

    cout<<"Enter the elemet you want to enter at the index"<<endl;
    cin>>i>>n;
    arr1->insert(i,n); 
    arr1->display();
    cout<<"Enter the key you want to search"<<endl;
    cin>>key;
   // arr1=new array(s);//Basically we created object pointer and it is going to create construtor in heap so 
                      //through that we can create dynamic array


    arr1->linearsearch(key);
    arr1->display();                


}