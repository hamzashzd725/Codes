#include <iostream>
using namespace std;

int main() {

    int row, clmn;

    cout<<"Enter number of rows: ";
    cin>>row;

    cout<<"Enter Number of Columns: ";
    cin>>clmn;
    int arr[row][clmn];
    cout<<"Enter "<<row*clmn<<" elemnts into array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < clmn; j++) {
            cin>>arr[i][j];
        }
    }

    if (row == clmn) {
        cout<<"Matrix is square."<<endl;
    }
    else {
        cout<<"Matrix is not square."<<endl;
        cout<<"Matrix is not identity."<<endl;
        return 1;
    }
    bool identity = true;
    for (int i = 0; i < row; i++) {
        for (int j  = 0; j < clmn; j++) {
            if (i==j && arr[i][j] == 1) {
                identity = true;
                continue;
            }
            else if (i != j && arr[i][j] == 0) {
                continue;
            }
            identity = false;
        }
    }
    if (identity == true) {
        cout<<"Matrix is Identity"<<endl;
    }
    else {
        cout<<"Matrix is not identity"<<endl;
    }
    return 0;
}