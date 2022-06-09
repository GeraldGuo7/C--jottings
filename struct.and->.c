#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int b;
}DATA;

DATA f() {
    DATA a = {1};
    return a;
}

DATA* g() {
    static DATA a = {1};
    return &a;
}

int main()
{
    DATA a;

    a.b = 2;    //a is lvalue, a.b is lvalue, OK
    // f().b = 2;  //f() returns a non-lvalue, f().b is non-lvalue, compilation error
    g()->b = 2; //g()->a is always OK
}
