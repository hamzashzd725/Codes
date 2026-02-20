#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout<<"Enter 10 numbers into array: ";
    for (int i = 0; i < 10; i++) {
        cin>>arr[i];
    }
    int temp;
    int min_index;

    for (int j = 0; j < 10; j++) {
        min_index = j;
        for (int k = j + 1; k < 10; ++k) {
            if (arr[k] < arr[min_index]) {
                min_index = k;
            }
        }
        if (min_index != j) {
            temp = arr[min_index];
            arr[min_index] = arr[j];
            arr[j] = temp;
        }
    }
    int sub = 0;
    for (int i = 9; i >= 0; i--) {
        if (sub > i) {
            break;
        }
        cout<<arr[i]<<" "<<arr[sub]<<" ";
        sub++;
    }
    cout<<endl;
    return 0;
}
