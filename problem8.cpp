#include <iostream>
using namespace std;
bool Num(int a) {
if (a<10)
    return true;
    if (a%10<=(a/10)%10)
        return false;

    return Num(a/10);
}
int main() {
    cout<<boolalpha;
cout<<Num(1234);
}