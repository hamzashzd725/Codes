#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"Enter A string to remove all vowells: ";
    string s;
    cin>>s;

    if(s.find('a') || s.find('e') || s.find('i') || s.find('o') || s.find('u')) {
        s.clear();
    }
    cout<<s;
}
