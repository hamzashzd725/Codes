#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout<<"Enter 10 Numbers into array: ";
    for (int i = 0; i < 10; i++) {
        cin>>arr[i];
    }

    cout<<"Reversed Array: ";
    for (int i = 9; i > -1; i--) {
        cout<<arr[i]<<" ";
    }
    return 0;
}