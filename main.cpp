#include <iostream>

namespace Sofia {
    class MyClass {
    public:
        void show() const {
            std::cout<<"MyClass::from namespace Sofia"<<std::endl;
        }
    };
}

namespace Mukuta {
    class MyClass {
    public:
        void show() const {
            std::cout<<"MyClass::from namespace Mukuta"<<std::endl;
        }
    };
}
int main() {
    Sofia::MyClass a;
    a.show();

    Mukuta::MyClass b;
    b.show();

    return 0;
}