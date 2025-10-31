#include <iostream>
using namespace std;
int reverse(int x, int rev=0) {
    if (x <1)
        return rev;
    return reverse(x / 10,rev*10+x%10);

}


int main() {

cout<<reverse(1234);
}
