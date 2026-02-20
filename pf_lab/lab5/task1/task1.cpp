#include <iostream>
using namespace std;

int main() {
    cout<<"Enter Number of Rows you want to print: ";
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
                cout<<"1 ";
            }
            else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    return 0;
}