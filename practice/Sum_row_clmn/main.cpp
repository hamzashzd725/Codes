#include <iostream>
using namespace std;

int main() {
    int row, clmn;
    cout<<"Enter Number of rows of array: ";
    cin>>row;

    cout<<"Enter Number of columns of Array: ";
    cin>>clmn;

    int arr[row][clmn];

    cout<<"Enter "<<row * clmn<<" Elements into array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < clmn; j++) {
            cin>>arr[i][j];
        }
    }
    int sum_row;

    cout<<endl<<"==========="<<endl;
    cout<<"Sum of Rows"<<endl;
    cout<<"==========="<<endl;
    for (int i  = 0; i < row; i++) {
        sum_row = 0;
        for (int j = 0; j < clmn; j++) {
            sum_row += arr[i][j];
        }
        cout<<"Sum of Row No "<<i + 1<<" is: "<<sum_row<<endl;
    }
    int sum_clmn;
    cout<<endl<<"=============="<<endl;
    cout<<"Sum of Columns"<<endl;
    cout<<"=============="<<endl;

    for (int i = 0; i < row; i++) {
        sum_clmn = 0;
        for (int j  = 0; j < clmn; j++) {
            sum_clmn += arr[j][i];
        }
        cout<<"Sum of Column No "<<i+1<<" is: "<<sum_clmn<<endl;
    }
}