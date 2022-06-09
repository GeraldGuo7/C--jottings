#include<stdio.h>
#include<stdlib.h>
//class define the variables and they are objects.
class Student{
    public:
        char *name;
        int age;
        float score;

        void display(){
            printf("The age of %s is %d and the score is %f.",name, age, score);
        }
};

int main()
{
    //Define variables and create objects.
    class Student stu1;
    stu1.name = "Tom";
    stu1.age = 12;
    stu1.score = 95.2f;
    stu1.display();

    return 0;
}