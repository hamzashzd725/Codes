#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout<<"Enter a string: ";
    cin.get(str, 100);
    int len = strlen(str);
    char rev[len + 1];
    int count = 0;
    for (int i = len; i >= 0; i--) {
        rev[count] = str[i];
       count++;
    }
    for (int j = 0; j <= len; j++) {
        cout<<rev[j];
    }
    cout<<endl;
    return 0;
}
