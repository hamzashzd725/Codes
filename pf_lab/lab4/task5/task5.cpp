#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[100], str2[100], strnew[100];
    cout<<"Enter First String: ";
    cin.get(str, 100);
    cin.ignore();
    cout<<"Enter Second String: ";
    cin.get(str2, 100);
    strcpy(strnew, str);
    int count = 0;
    int len = strlen(strnew);
    strnew[len] = ' ';
    for (int i = len + 1; i < 100; i++) {
        strnew[i] = str2[count];
        count++;
    }
    cout<<"Concatinated string: "<<strnew<<endl;
}
