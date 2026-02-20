#include <iostream>

using namespace std;

int main() {
    int arr[10];
    cout<<"Input: \n";
    for (int i = 0; i < 10; i++) {
        cin>>arr[i];
    }

    int count = 0;
    cout<<"Output: \n[ ";

    for (int j = 0; j < 10; j++) {
        int temp[10];
        temp[j] = arr[j];

        for (int k = count; k < j; k++) {
            if (temp[j] == arr[k]) {
                cout<<"] | [ ";
                count = j;
            }
        }

        cout<<temp[j]<<" ";
    }
    cout<<"]\n";
    return 0;
}
