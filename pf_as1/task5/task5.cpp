#include <iostream>
using namespace std;

int main() {
    char str[50];
    cout<<"Enter a String: ";
    cin.get(str, 50);

    int count = 0, count_letters = 0;
    char temp;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    for (int i = 0; i < count; i++) {

        if (temp == str[i]) {
            count_letters = 0;
            continue;
        }
        temp = str[i];
        cout<<temp;
        for (int j = i; str[j] == temp; j++) {
            count_letters++;
        }
        cout<<count_letters;
        count_letters = 0;
    }
    cout<<endl;
    return 0;
}
