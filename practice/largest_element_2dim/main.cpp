#include <iostream>
using namespace std;

int main() {
    int row, clmn;
    cout<<"Enter Number of rows and clmns for array: ";
    cin>>row>>clmn;

    int arr[row][clmn];
    cout<<"Enter "<<row * clmn<<"Elements into array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < clmn; j++) {
            cin>>arr[i][j];
        }
    }
    int largest = arr[0][0], cordinate[2];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < clmn; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
                cordinate[0] = i;
                cordinate[1] = j;
            }
        }
    }

    cout<<"Largest Element in Array is "<<largest<<" at cordinate "<<cordinate[0]<<"x"<<cordinate[1]<<endl;
    return 0; 
}