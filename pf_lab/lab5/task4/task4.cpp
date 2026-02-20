#include <iostream>
using namespace std;

int main() {
    int size, target;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" values in array: ";
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    cout<<"Enter Target sum: ";
    cin>>target;
    cout<<endl<<"pairs with sum "<<target<<" are: "<<endl;
    int temp;
    for(int i = 0; i < size; i++) {
        temp = arr[i];
        for (int j = i; j < size; j++) {
            if(temp + arr[j] == target && temp != arr[j]) {
                cout<<temp<<" + "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}