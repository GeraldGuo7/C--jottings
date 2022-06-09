#include<iostream>
int *getarray()
{
    int arr[5];
    std::cout<<"Enter the elements in an array:"<<std::endl;

    for(int i=0;i<5;i++ )
    {
        std::cin>>arr[i];
    }
    return arr;
}

int main()
{
    int *n;
    n = getarray();

    std::cout<<"Elements of array are:"<<std::endl;
    
    for(int i=0;i<5;i++)
    {
        std::cout<<n[i]<<std::endl;
    }
    return 0;
}
//It returns a local variable, but it is an illegal memory location to be 
//returned, which is allocated within a function in the stack.
//Since the program control comes back to the main() function and all
//the variables in a stack are freed. We can say this program is returning
//memory location, which is de-allocated, so the output of the program is
//a segmentation fault.

//There are 3 right ways of returning an array to a function:
//using dynamically allocated array
//using static array
//using structure

