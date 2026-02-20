#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Enter Size of Array: ";
    cin>>N;
    int arr[N], smallest, largest = 0, sum = 0;
    cout<<"Enter "<<N<<" Integers into the Array: ";
    for (int i = 0; i < N; i++) {
        cin>>arr[i];
        cout<<arr[i]<<" ";
        
        if (arr[i] > largest) {
            largest = arr[i];
        }
        sum += arr[i];
    }
    smallest = largest;
    int count = 0;
    cout<<"\nEven Numbers in array: ";
    for (int j = 0; j < N; j++) {
        if (arr[j] < smallest) {
            smallest = arr[j];
        }
        if (arr[j] %2 == 0) {
            cout<<arr[j]<<" ";
            count++;
        }
        
    }
    cout<<"\nNumber of Even integers in array: "<<count<<"\nOdd Integers in array: ";
    count = 0;

    for(int k = 0; k < N; k++) {
        if (arr[k] % 2 != 0) {
            cout<<arr[k]<<" ";
            count++;
        }
    }
    cout<<"\nLargest Element in Array: "<<largest<<endl;
    cout<<"Smallest ELement in Array: "<<smallest;
    cout<<"\nSum of all Elements in Array: "<<sum<<endl;
    return 0;
}