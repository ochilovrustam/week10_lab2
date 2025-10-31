#include <iostream>
using namespace std;
int palindrome(int x, int y=0) {
    if (x==0)
        return y;
    return (x/10, y*10+x%10);
}
bool ispalindrome(int x) {
    if (x < 0) return false;
    return x == palindrome(x);
}

int main() {
cout<<ispalindrome(1234);

}
