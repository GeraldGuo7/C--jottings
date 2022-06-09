//Return array by passing an array as the parameter to the function.
#include<iostream>

int *getarray(int *a)
{
    std::cout<<"Enter the elements in an array:"<<std::endl;

    for( int i=0;i<5;i++ )
    {
        std::cin>>a[i];
    }
    return a;
}

int main()
{
    int *n;
    int a[5];
    n = getarray(a);

    std::cout<<"Elements of array are:"<<std::endl;
    for (int i=0;i<5;i++ )
    {
        std::cout<<n[i]<<std::endl;
    }
    return 0;
}