/*
#include <stdio.h>

namespace Diy{
    class Student{
        public:
            char *name;
            int age;
            float score;

        public:
            void say(){
                printf( "The age of %s is %d and the score is %f.", name, age, score);
            }
    };
};

int main()
{
    Diy::Student student1;
    
    student1.name = "Tom";
    student1.age = 12;
    student1.score = 95;
    
    student1.say();

    return 0;
}
*/

/*
#include <iostream>

void function(){
    std::cout<< "http://c.biancheng.net"<<std::endl;
}

int main()
{
    std::string str;
    int age;
    
    std::cin>>str>>age;
    std::cout<<str<<std::endl<<age<<std::endl;

    std::cout<<"Please input the function:"<<std::endl;
    function();

    return 0;
}
*/
#include <iostream>

int main()
{
    int x;
    float y;

    std::cout<<"Please input an int number and a float number:"<<std::endl;

    std::cin>>x>>y;

    std::cout<<"The int number is:"<<x<<std::endl;
    std::cout<<"The float number is:"<<y<<std::endl;

    return 0;
}







