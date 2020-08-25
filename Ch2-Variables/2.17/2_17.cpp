#include <iostream>

int main(){
    int i, &ri = i; //ri points to the memory chunk of i, so its ok that i is uninitialized
    i = 5, ri = 10; // &ri cannot be initialized with literal, but ri can
                    // ri and i has the same address, changing ri is changing i

    std::cout << i << " " << ri << std::endl;

    return 0;
}