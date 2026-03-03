#include <iostream>
using namespace std;

int main() {
    int arr[3][4];
    cout<<"Enter elements into 3x4 Matrix: ";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin>>arr[i][j];
        }
    }
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            temp = arr[i][j];
            for (int k = 0; k < 3; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
