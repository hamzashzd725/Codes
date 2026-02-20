#include <iostream>
using namespace std;

int main() {
    int lim;
    cout<<"Enter Upper Limit: ";
    cin>>lim;

    int sum = 0;
    for (int i = 1; i <= lim; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout<<"Sum of digits divisible 5 and 3 uptill limit "<<lim<<" is: "<<sum;
    return 0;
}