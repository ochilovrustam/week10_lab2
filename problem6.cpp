#include <iostream>
using namespace std;
int digitProduct(int a, int mul=1) {
    if (a==0)
        return mul;
    int dig=a%10;

        return digitProduct(a/10, mul*dig);
}


int main() {

    cout<<digitProduct(505);
}
