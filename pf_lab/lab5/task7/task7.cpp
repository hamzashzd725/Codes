#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for(int i = 1; i <= 10; i++) {
        for(int space = 1; space < i; space++) {
            cout << "\t";
        }
        for(int j = i; j <= 10; j++) {
            cout << i * j << "\t";
        }

        cout << endl;
    }

    return 0;
}
