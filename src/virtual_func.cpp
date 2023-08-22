#include <iostream>

class Base {
    public:
        virtual void func() 
        {
            std::cout << "Base" << std::endl;
        }
};
class Der : public Base {
    public:
        virtual void func() 
        {
            std::cout << "Der" << std::endl;
        }
};
class Der2 : public Der {
    public:
        void func() 
        {
            std::cout << "Der2" << std::endl;
        }
};

void b(Base& b){
    b.func();
}

void c(Der2& c){
    c.func();
}

int main()
{
    Der2 myder;
    b(myder);
    c(myder);
    myder.Base::func(); //direcct call
    myder.Der::func(); //direct call

    
    return 0;
}