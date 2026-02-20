#include <iostream>
using namespace std;

int main() {
    int height;
    do {
        cout<<"Height: ";
        cin>>height;
    } while(height < 0);
    for (int i = 0; i < height; i++) {
        for (int j  = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}