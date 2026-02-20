#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr1[size], arr2[size];
    cout<<"Enter "<<size<<" elements in array A: ";
    for (int i = 0; i < size; i++) {
        cin>>arr1[i];
    }
    cout<<"Enter "<<size<<" elements in array B: ";
    for (int i = 0; i < size; i++) {
        cin>>arr2[i];
    }
    int k = 0;
    int merged[4 * size];
    cout<<"Merged: ";
    for (int i = 0; i < size; i+= 2) {
        for (int j = i; j < i + 1; j++) {
            merged[i] = arr1[i];
            cout<<merged[i]<<" ";
            if (i + 1 > size - 1) {
                k = j;
                break;
            }
            merged[i + 1] = arr1[i + 1];
            cout<<merged[i + 1]<<" ";
            k = j;
    }
    for (int l = 0; l < 1; l++) {
        merged[k + 1] = arr2[i];
        cout<<merged[k + 1]<<" ";
        if (k > size - 2) {
            break;
        }
        merged[k + 2] = arr2[i + 1];
        cout<<merged[k + 2]<<" ";
    }
    if (k > size * 2) {
        break;
    }
}
cout<<"\nMedian is "<<merged[size / 2]<<endl;
return 0;
}