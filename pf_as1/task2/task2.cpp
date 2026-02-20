#include <iostream>
using namespace std;

int main() {
    int arr[10], rotate;
    cout<<"Enter Number into Array:";

    for (int i = 0; i < 10; i++) {
        cin>>arr[i];
    }
    cout<<"Enter how many numbers you want to rotate: ";
    cin>>rotate;

    int rotated[10] = {0};
    int count = 10;
    int rotated_count = 0;

    cout<<"Rotated: ";
    for (int j = 1; j <= rotate; j++) {
       rotated [rotated_count] = arr[count - rotate];
       rotated_count++; count++;
    }

    count = 0;
    for(int l = rotate; l < 10; l++) {
        rotated[l] = arr[count];
        count++;
    }

    for (int i = 0; i < 10; i++) {
        cout<<rotated[i]<<" ";
    }
    cout<<endl;

    return 0;
}
