#include <iostream>

int main(){
    int i = 42;
    int i2 = 1024;
    int *i1 = &i;

    //change the value of a pointer
    i1 = &i2;
    std::cout << "Point value changed to " << *i1 << std::endl;
    std::cout << "Origin value is " << i << std::endl;

    //change the value to which the pointer points
    i1 = &i;
    *i1 = 2048;
    std::cout << "Value point points changed to " << *i1 << std::endl;
    return 0;
}