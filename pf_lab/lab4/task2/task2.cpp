#include <iostream>
using namespace std;

int main() {
    char str[50];
    cout<<"Enter a string: ";
    cin.get(str, 50);
    int count = 0, smallest = 100, end_index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count = 0;
        for (int j = end_index; str[j] != '\0' ; j++) {
        if (str[j] == ' ') {
            end_index = j + 1;
            break;
        }
            count++;
        }
        if (count < smallest) {
            smallest = count;
        }
    }
    cout<<"Length of smallest word is: "<<smallest<<endl;
    cout<<endl;
    return 0;
}
