#include <iostream>
using namespace std;
int main() {
    int arr[10];

    cout<<"Enter 10 numbers in the array: ";

    for(int i = 0; i < 10; i++) {
        cin>>arr[i];
    }

    int check;

    cout<<"Enter number to find its frequency in the array: ";
    cin>>check;

    int count = 0;

    for (int j = 0; j < 10; j++) {
        if (arr[j] == check) {
            count++;
        }
    }
    cout<<"Occurance of "<<check<<" is "<<count<<endl;

    return 0;
}
