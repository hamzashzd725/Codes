#include <iostream>

using namespace std;

int main() {
    int arr[5];

    cout<<"Enter 5 elements into array: ";
    for (int i = 0; i < 5; i++) {
        cin>>arr[i];
        if(arr[i] < 0) {
            arr[i] = 0;
        }
    }
    cout<<"Updated Array: ";
    for(int j = 0; j < 5; j++) {
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    return 0;

}
