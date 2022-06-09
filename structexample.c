#include<stdio.h>
#include<stdlib.h>

/*
int main()
{
    int temp;
    
    struct Data
    {
        int a,b,c;
    };

    struct Data *p;
    struct Data A = {1, 2, 3};

    p = &A;
    temp = p->a;

    printf( "The first data item in A is %d.",temp );
    // return 0;
}

//Define struct
struct Data
{
    int a;
    struct Data *next;
};

main()
{
    struct Data *p;
    p = p->next;
}
*/

int main()
{
    build(op);

    switch (op) 
    {
        case 39:
        case 50:
            if ( p2[0]!=20 | p2[3]!=4 )
                error( "Illegal structure ref" );

            *cp++ = p1;
            t = t2;
            
            if ((t&300) == 030) //array
                t = decref(t);

            setype(p1, t);

            if (op==39)
                build(35);

            *cp++ = block( 1, 21, 7, 0, p2[5] );
            build(40);
    }
}

