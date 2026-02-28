#include <iostream>
using namespace std;

int main() {
    int arr[3][3], arr2[3][3];
    cout<<"Array 1: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
           cin>>arr[i][j];
        }
    }
    cout<<"Array 2: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
           cin>>arr2[i][j];
        }
    }
    int prod[3][3], prod_;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            prod[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                prod[i][j] = prod[i][j] + arr[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<prod[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}