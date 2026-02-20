#include <iostream>
using namespace std;

int main() {
    int num, sum_even = 0, sum = 0, sum_odd = 0;
    while (true) {
        cout<<"Enter Number to keep adding them: ";
        cin>>num;
        if (num == 0) {
            break;
        }
        if (num % 2 == 0) {
            sum_even += num;
        }
        else if (num % 2 != 0) {
            sum_odd += num;
        }
        sum+= num;
    }
    cout<<"Sum of even numbers is: "<<sum_even<<endl;
    cout<<"Sum of odd numbers is: "<<sum_odd<<endl;
    cout<<"Sum of all: "<<sum<<endl;
    return 0;
}