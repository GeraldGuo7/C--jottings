//Delete the specific item in the array.
//The drawback of this algo is the code keep running after the deletion.
/*
    length = sizeof(arr)/sizeof(int);
    for ( i=0; i<=length-1; i++ )
    {
        if ( delection == arr[i] )
        {
            for ( j=i; j<=length-2; j++ )
            {
                arr[j] = arr[j+1]; //override
            }
        }
    }
*/

//1. count the non-null value
//2. min and max and idofmin and idofmax
//3. quantile
//4. mean
//5. median
//6. mode
//7. var
//8. std
//9. skew
//10. kurt
//11.





#include <stdio.h>
#include <stdlib.h>

#define ARR_LEGNTH 100
#define ElemType int 

//{min,max, ...} {-90, -6, -73, -76, -75}
//{min...max...} {-90, -73, -6, -76, -75}
//{min...max} {-90, -73, -76, -75, -6}
//{...min...max} {-76, -90, -73, -75, -6}
//{...minmax...} {-76, -73, -90, -6,-75}
//{...minmax} {-76, -73, -75, -90, -6}
//{maxmin...} {-6, -90, -76, -73, -75}
//{max...min...} {-6, -76, -73, -90, -75}
//{max...min} {-6, -76, -73, -75, -90}

int main()
{
    ElemType length = 5;
    ElemType rssiCount = 5;
    ElemType i, maxindex, minindex;

    ElemType outlierrssi[20] = {-6, -76, -73, -90, -75};
    ElemType temprssi[length-1];
    ElemType finalrssi[length-2];

    if (rssiCount < length)
    {
        return -1;
    } else 
    {
        maxindex = 0;
        
        //Search the maximum
        for ( int i=0; i<length; i++ )
        {
            if ( outlierrssi[i]>outlierrssi[maxindex] )
            {
                maxindex = i;
            } else 
            {
            }   
        }
    
        for ( i= maxindex; i<length-1; i++ )
        {
            outlierrssi[i] = outlierrssi[i+1];
        }
    
        for ( i=0; i<length-1; i++)
        {
            temprssi[i] = outlierrssi[i];
        }
    }

    //printf( "\n-------------The phase 1------------\n" );
    
    minindex = 0;
    for ( i=0; i<length-1; i++ )
    {
        if ( temprssi[i]< temprssi[minindex] )
        {
            minindex = i;
        } else {
        }
    }

    for ( i=minindex; i<length-2; i++ )
    {
        temprssi[i] = temprssi[i+1];
    }

    for ( i=0; i<length-2; i++ )
    {
        finalrssi[i] = temprssi[i];
    }

    // printf( "\n------------The phase 2------------\n");
    
    for ( i=0; i<length-2; i++ )
    {
        printf("\t%d", finalrssi[i] );
    }

    return 0;
}












