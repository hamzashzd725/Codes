#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <5; i++) {
        for (int j = 5; j > i; j--) {
            cout<<" ";
        }
        if (i == 0) {
            cout<<"*";
            cout<<endl;
            continue;
        }
        for(int k = 0; k < 2*i + 1; k++) {
            if (i == 2) {
                cout<<"*";
                continue;
            }
            if (k == 0 || k == 2*i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}