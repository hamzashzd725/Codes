#include <iostream>
using namespace std;

int main() {
    int row, clmn;
    cout<<"Enter number of rows of array: ";
    cin>>row;
    
    cout<<"Enter number of columns in array: ";
    cin>>clmn;
    int arr[row][clmn], sum = 0;
    cout<<"Enter elements into array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < clmn; j++) {
            cin>>arr[i][j];
            sum += arr[i][j];
        }
    }
    cout<<"Sum of all elements in two dimensional array is: "<<sum;

    return 0;
}