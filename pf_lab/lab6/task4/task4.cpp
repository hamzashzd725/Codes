#include <iostream>
using namespace std;

int main() {
    int row = 3, clmn = 3;
    bool check = true;
    int arr[row][clmn], flag;

    cout<<"Enter Elements into 3x3 array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < clmn; j++) {
            cin>>arr[i][j];
        }
    }
    int sum_row, r[3];

    for (int i  = 0; i < row; i++) {
        sum_row = 0;
        for (int j = 0; j < clmn; j++) {
            sum_row += arr[i][j];
        }
        flag = sum_row;
        r[i] = sum_row;
        if (flag != r[i]) {
            check = false;
        }
        cout<<"Sum of Row No "<<i + 1<<" is: "<<sum_row<<endl;
    }
    int sum_clmn, c[3];

    for (int i = 0; i < row; i++) {
        sum_clmn = 0;
        for (int j  = 0; j < clmn; j++) {
            sum_clmn += arr[j][i];
        }
        c[i] = sum_clmn;

        if (flag != c[i]) {
            check = false;
        }
        cout<<"Sum of Column No "<<i+1<<" is: "<<sum_clmn<<endl;
    }

    int sum_diagonal = 0;
    for (int i = 0; i < row; i++) {
        for (int j  = 0; j < clmn; j++) {
            if (i == j) {
                sum_diagonal += arr[i][j];
            }
        }
    }

        if (flag != sum_diagonal) {
            check = false;
        }
    cout<<"Sum of Main Diagonal is: "<<sum_diagonal<<endl;
    int sum_sec = 0, count = 2;
    for (int i = 0; i < row; i++) {
        sum_sec += arr[i][count];
        count--;
    }

        if (flag != sum_sec) {
            check = false;
        }
    cout<<"Secondary Diagonal is: "<<sum_sec<<endl;

    if (check  == true) {
        cout<<"Matrix is Magic Square"<<endl;
    }
    else 
        cout<<"Matrix is not Magic Square."<<endl;

    return 0;

}