#include <iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int length=0;
    while (number != 0) {
        number = number / 10;
        length++;
    }
    cout<<length;
    return 0;
}