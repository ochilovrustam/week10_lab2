#include <iostream>
using namespace std;
    bool isPrime(int n, int i=2) {
     if (n%i==0)
        return false;
     if (i*i>n)
        return true;
    return isPrime(n, i+1);
    }


     int main() {
        cout<<boolalpha;
        cout << isPrime(20);
    return 0;
    }
