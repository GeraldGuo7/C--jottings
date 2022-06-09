//using static variable
#include<stdio.h>
int *getarray(){
    static int arr[5];
    printf("Enter the elements in an array:\n");

    for( int i=0;i<5;i++ )
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}

int main()
{
    int *pointer;
    pointer = getarray();

    printf("\nElements that you have entered are:\n");
    for( int i=0;i<5;i++ )
    {
        printf("%d\n",pointer[i]);
    }
    return 0;
}