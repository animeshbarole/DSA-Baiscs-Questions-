#include<stdio.h>


struct Rectangle
{
    int length;  
    int breadth;
    char name[25];
};

int main()
{
    struct Rectangle r1; //Declaration
    struct Rectangle r2 = {10,5};//Declration and intialisationn
    r1.length = 20; 
    r1.name = "Animesh";
    r1.breadth = 30;
    printf("Area of Rectangle %d", r2.length*r2.breadth);
    

}
