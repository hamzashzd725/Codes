#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int spaces = 0;

    for(int i = 1; i <= n; i++) {

        if(i == n) {
            for(int j = 1; j <= spaces; j++)
                cout << "*";
        }
        else {
            cout << "*";
            
            for(int j = 1; j <= spaces; j++) {
                cout << " ";
            }

            if(i != 1) {
                cout << "*";
            }
            spaces += i;
        }

        cout << endl;
    }

    return 0;
}
