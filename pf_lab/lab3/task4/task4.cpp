#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout<<"Enter 10 numbers into array: ";

    for (int i = 0; i < 10; i++) {
        cin>>arr[i];
    }

    for (int j = 0; j < 9; j++) {
        if (arr[j] < arr[j + 1]) {
            continue;
        }
        else {
            cout<<"Not in Ascending\n";
            return 1;
        }
    }

    cout<<"Array is in ascending order\n";
    return 0;
}
