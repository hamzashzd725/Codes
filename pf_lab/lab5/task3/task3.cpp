#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout<<"Height between 0 and 20: ";
        cin>>n;
    } while(n < 1 && n > 19);

    for (int i = 0; i < n; i++) {
        for (int j = n; j > i + 1; j--) {
            cout<<"#";
        }
        for (int k = 0; k <= i; k++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}