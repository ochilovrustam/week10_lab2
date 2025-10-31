#include <iostream>
using namespace std;
bool powerNum(int a) {
    if (a==1)
        return true;
    if (a==0 || a%2!=0 )
        return false;
    return powerNum(a/2);
}
int main() {
    cout<<boolalpha;
cout<<powerNum(16);

}
