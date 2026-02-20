#include <iostream>
using namespace std;

int main() {
    int table;
    cout<<"Enter a Number to print its multiplication table: ";
    cin>>table;

    for (int i = 1; i <= 10; i++) {
        cout<<table<<" x "<<i<<" = "<<table*i<<endl;
    }
    return 0;
}