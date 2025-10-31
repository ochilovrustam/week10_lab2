#include <iostream>
using namespace std;
int evenDig(int a, int count=0) {
    if (a<1)
        return count;
    int dig=a%10;
    if (dig%2==0)
        return evenDig(a/10, count+1);
    else
        return evenDig(a/10,count);
}


int main() {

cout<<evenDig(1276863);
}
