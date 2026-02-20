#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    for (int i  = 0; i < n; i++) {
        for (int j = n; j >= i; j--) {
            cout<<"  ";
        }
        int v = 1;
        for (int k = 0; k <= i; k++) {
            cout<<v<<"   ";
            v  = v * (i - k) / (k + 1);
        }
        cout<<endl;
    }

    return 0;
}