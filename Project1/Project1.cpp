#include <iostream>

int main()
{
    class A {
    public:
        A() = default;
        ~A() = default;
    };
    std::cout << "Hello World!\n";
    return 0;
}
