#include <iostream>
using namespace std;
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else return base * power(base, exponent - 1);
    }


int main() {
cout<<power(5,4)<<endl;

}
