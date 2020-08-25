#include <iostream>

int main(){
    int i = 1024, i2 = 2048;
    int &r = i, r2 = i2;
    int i3 = 1024, &ri = i3;
    int &r3 = i3, &r4 = i2;
    r4 = r;

    std::cout << r4 << std::endl;
    
    return 0;
}