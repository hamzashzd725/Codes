#include <iostream>
using namespace std;

int main() {
    int size, sum = 0;
    cout<<"Enter Size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elemnts into array to find how many are greater than the average: ";
    for (int i  = 0; i < size; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }

    double avg = (float)sum / (float)size;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }
    cout<<"Average: "<<avg<<endl;
    cout<<"Number of Integers greater than average are: "<<count;
    return 0;
}