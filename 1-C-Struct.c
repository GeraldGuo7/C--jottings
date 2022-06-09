#include<stdio.h>
#include<stdlib.h>

//STANDARD DEFINITION
struct Student{
    char *name;
    int age;
    float score;
};

void display(struct Student stu){
    printf( "The age of %s is %d and the score is %lf", \
    stu.name, stu.age, stu.score);
}

int main()
{
    //instantiate a struct type stu1.
    struct Student stu1;
    stu1.name = "Tom";
    stu1.age = 12;
    stu1.score = 90;

    display(stu1);
    return 0;
}