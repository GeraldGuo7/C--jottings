//changing the access of a class member
/*
Suppose B is a direct base class of class A. To restrict access of class B to the members
of class A, derive B from A using either the access specifiers protected or private.

To increase the access of a member x of class A inherited from class B, usse a using
declaration.

You may increase the access of the following members:
1. A member inherited as private.
(You can not increase the access of a member declared as private)
2. A member either inherited or declared as protected.

*/
struct A {
    protected:
        int y;
    public:
        int z;
};

struct B : private A {};

struct C : private A {
    public:
        using A::y;
        using A::z;
};

struct D : private A {
    protected:
        using A::y;
        using A::z;
};

struct E:D{
    void f() {
        y = 1;
        z = 2;
    }
};

struct F:A{
    public:
        using A::y;
    
    private:
        using A::z;
};

int main(){
    B objection_B;

    C objection_C;
    objection_C.y = 5;
    objection_C.z = 6;

    D objection_D;
    // objection_D.y = 7;
    // objection_D.z = 8;
    
    F objection_F;
    objection_F.y = 7;
    // objection_F.z = 8;

}