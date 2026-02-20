#include <iostream>
using namespace std;

int main() {
    int arr[10], choice, n_search, count_search;
    char ctrl = 'n';
    cout<<"Enter Numbers into Array: ";
    for (int i = 0; i < 10; i++) {
        cin>>arr[i];
    }
    cout<<endl<<"=====Array Search System====="<<endl;
    do {
        cout<<"1. Search Number In Array"<<endl;
        cout<<"2. Replace instances of Number in the array: "<<endl;
        cout<<endl<<"Select Option: ";
        cin>>choice;

        switch(choice) {
            case 1:
                count_search = 0;
                cout<<"Enter a number to Search it in the Array: ";
                cin>>n_search;

                for (int i = 0; i < 10; i++) {
                    if (arr[i] == n_search) {
                        count_search++;
                    }
                }
                if (count_search == 0) {
                    cout<<endl<<"Number Does not exist in the array!";
                }
                else {
                    cout<<endl<<n_search<<" appears "<<count_search<<" times in the array"<<endl;
                }
                break;
            case 2:
                int replace, value, temp;
                cout<<endl<<"Enter the value you want to replace from the array: ";
                cin>>replace;
                cout<<endl<<"Enter the new value: ";
                cin>>value;
                cout<<"Updated Array: ";
                for (int i =0; i < 10; i++) {
                    if (arr[i] == replace) {
                        arr[i] = value;
                    }
                    cout<<arr[i]<<" ";
                }
                break;
            default:
                cout<<endl<<"Option does not exist please try again!"<<endl;
        }
        cout<<endl<<"Do want to exit(y/n): "<<endl;
        cin>>ctrl;
    } while(ctrl == 'n');
    return 0;
}