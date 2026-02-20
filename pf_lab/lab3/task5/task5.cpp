#include <iostream>

using namespace std;

int main() {
    int arr[5];
    int sum = 0, count_even = 0, count_odd = 0, sum_even = 0, sum_odd = 0, smallest;
    cout<<"Enter 5 Numbers into array: ";
    for (int i = 0; i < 5; i++)
    {

        cin>>arr[i];
        if (i == 0) {
            smallest = arr[0];
        }
        if (arr[i] % 2 == 0) {
            count_even++;
            sum_even += arr[i];
        }
        else {
            sum_odd += arr[i];
            count_odd++;
        }
        sum += arr[i];

        if (arr[i] <= smallest) {
            smallest = arr[i];
        }
    }
    double average = sum / 5.0;
    double average_even = float(sum_even) / count_even;
    double average_odd = float(sum_odd) / count_odd;
    double average_of_two = (average_odd + average_even) / 2.0;
    cout<<"Average of all "<<average<<endl;
    cout<<"Average of even "<<average_even<<endl;
    cout<<"Average of odd "<<average_odd<<endl;
    cout<<"Average of above two "<<average_of_two<<endl;

    cout<<"Smallest "<<smallest<<endl;
}
