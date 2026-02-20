#include <iostream>

using namespace std;

int main() {
    char str[50];

    cout<<"Enter a String: ";
    cin.get(str, 100);

    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}
