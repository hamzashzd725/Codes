#include <iostream>

using namespace std;

int main() {
    int arr[] = {1 , 2, 3 , 4, 5, 6, 7, 8, 9};

    int new1[5];
    int new2[4];
    cout<<"First array: ";
    for (int i = 0; i < 5; i++) {
        new1[i] = arr[i];
        cout<<new1[i]<<" ";
    }
    cout<<endl<<"Second Array: ";
    for (int j = (9 / 2) + 1; j < 9; j++) {
        new2[j - 5] = arr[j];
        cout<<new2[j - 5]<<" ";
    }
    cout<<endl;
    return 0;
}
