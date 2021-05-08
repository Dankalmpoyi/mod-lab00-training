#include <iostream>
 
long long pow(long long a, unsigned int p) {
    long long result = a;
    while (--p) {
        result *= a;
    }
    return result;
}
 
int main()
{
    long long x, y, z;
    std::cin >> x >> y >> z;
    std::cout << pow(x, 11) + pow(y, 5) + pow(z, 18);
}
