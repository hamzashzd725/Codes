#include <iostream>

using namespace std;

int main() {
    char str[50], upper[100] = {'\0'}, lower[100] = {'\0'}, digits[100] = {'\0'};
    int lower_= 0, upper_ = 0, digits_ = 0;
    cout<<"Enter a String: ";
    cin.get(str, 100);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            lower[lower_] = str[i];
            lower_++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            upper[upper_] = str[i];
            upper_++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits[digits_] = str[i];
            digits_++;
        }
    }

    cout<<"Upper: "<<upper<<endl;
    cout<<"Lower: "<<lower<<endl;
    cout<<"Digits: "<<digits<<endl;
    return 0;
}
