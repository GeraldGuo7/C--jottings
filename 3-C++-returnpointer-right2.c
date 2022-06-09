//Returning array using malloc() function.
#include <stdio.h>
#include <malloc.h>

int *getarray(int size)
{
    printf( "-----------Enter the elements in an array\n");
    int *p = malloc( sizeof(size) );


    for( int i=0;i<size;i++ )
    {
        scanf("%d", &p[i]);
    }
    return p;
}

int main()
{
    int size;
    printf( "Enter the size of the array:\n" );
    scanf( "%d",&size );

    int *pointer;
    pointer = getarray(size);

    int length = sizeof(*pointer);
    
    printf( "Elements that you have entered are:\n" );
    for( int i=0;pointer[i]!='\0';i++ )
    {
        printf( "%d\n",pointer[i] );
    }
    return 0;
}