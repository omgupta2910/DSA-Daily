#include <iostream>

int power(int x, int n) {
    int res = 1;
    

    n >>= 1;
    while (n > 0) {
        x*= x;
        
    }
    x = 
    
    return res;
}

int main() {
    int x = 2;
    int n = 10;
    
    int result = power(x, n);
    
    std::cout << x << "^" << n << " = " << result << std::endl;
    
    return 0;
}
