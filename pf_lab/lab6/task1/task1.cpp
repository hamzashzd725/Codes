#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    bool found = false;
    cout<<"Elemnts into 3x3 matrix: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin>>arr[i][j];
        }
    }

    int key;
    cout<<"Enter a key to search: ";
    cin>>key;
    int row, clmn;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (key == arr[i][j]) {
                row  = i;
                clmn = j;
                cout<<"Key found at Row = "<<row<<" and Column = "<<clmn<<endl;
                found = true;
            }
        }
    }

    if (found == false) {
        cout<<"Key Not found"<<endl;
        return 1;
    }
    cout<<"Matrix ["<<row<<"]["<<clmn<<"]"<<endl;

    return 0;
}