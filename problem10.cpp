#include <iostream>
using namespace std;
int power(int x, int y) {
    if (y==0)
        return 1;
    if (y==0 || y%2==0)
        return power(x,y/2)*power(x,y/2);
    if (y==0 || y%2!=0)
        return x*power(x,y-1);
}

int main() {
cout<<power(2,8);
}