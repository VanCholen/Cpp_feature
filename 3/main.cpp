#include <iostream>
#include <memory>

class Base { 
    public: 
    virtual void f() { 
        std::cout << "Base::f()" << std::endl; 
    };
   
 }; 

class Derived : public Base { 
    public: virtual void f() override { 
        std::cout << "Derived::f()" << std::endl; 
    }; 
}; 
int main(int argc, char* argv[])
{
    std::cout<<"Program starting......"<<std::endl;
    Base* d = std::make_shared<Derived>().get();  // C++14

    auto b = *d; 
    b.f();   // call Base::f

    auto& c = *d;  
    c.f();   // call Derived::f 

    return 0;
}