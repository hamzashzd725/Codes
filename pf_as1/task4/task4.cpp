#include <iostream>
using namespace std;

int main() {
    char str[100];
    int count_letters = 0, count = 0;

    cout<<"Enter String: ";
    cin.get(str, 100);

    cout<<"\nOutput: \n"<<"Modified String: ";

    for (int i = 0; i < 100; i++) {
        if (str[i] == '\0') {
            break;
        }
        if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z') && str[i] != ' ' && (str[i] < '0' || str[i] > '9')) {
            str[i] = '_';
        }
        count++;
    }
    cout<<str;
    cout<<endl<<"\nLongest Word: ";
    int largest_start_index = 0, largest = 0, current_start = 0;
    for (int i = 0; i <= count; i++)
    {
        if (str[i] != ' ' && str[i] != '\0') {
           if (count_letters == 0)
               current_start = i;
           count_letters++;
       }
       else {
           if (count_letters > largest) {
               largest = count_letters;
               largest_start_index = current_start;
           }
           count_letters = 0;
       }
    }

    for (int i = largest_start_index; i < (largest_start_index + largest); i++) {
            cout<<str[i];
    }
    cout<<"\nlength: "<< largest<<endl;

    char temp = str[0], most_char[count], ch; int most = 0;
    largest = 0;
    for (int i = 0; i < count; i++) {
        temp = str[i];
        for (int k = 0; k < count; k++) {
            if (temp == most_char[k]) {
                continue;
            }
        }
        most = 0;
        most_char[i] = temp;
        for (int j = 0; j < count; j++) {
            if (str[j] == temp) {
                most++;
            }
            if (most > largest) {
                largest = most;
                ch = temp;
            }
        }

    }
    cout<<"\nMost Appeared Character: "<<ch;
    cout<<"\nFrequency: "<<largest<<endl;
    return 0;

}
