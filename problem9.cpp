#include <iostream>
using namespace std;
int Zeros(int a, int count=0) {
    if (a==0)
        return count;
    if (a%10==0)
        count=count+1;

    return Zeros(a/10,count);
}
int main() {
cout<<Zeros(50060);
}