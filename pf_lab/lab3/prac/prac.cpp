#include <iostream>

using namespace std;

int main() {
    int roll[10] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    char attend[10] = {'A'};
    int choice, count;

    do {
        cout<<"\n--- Student Attendance System ---"<<endl;
        cout<<"1. Mark Attendance" << endl;
        cout<<"2. Display Total Present Students"<<endl;
        cout<<"3. Display All Present Roll Numbers"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"\nEnter 'P' for Present or 'A' for Absent: ";
                for (int i = 0; i < 10; i++) {
                    cout<<"Roll Number "<<roll[i]<<": ";
                    cin>>attend[i];
                }
                break;

            case 2:
                count = 0;
                for (int i = 0; i < 10; i++) {
                    if (attend[i] == 'P') {
                        count++;
                    }
                }
                cout<<"\nTotal students present today: "<<count<<endl;
                break;
            case 3:
                cout<<"\nRoll Numbers of Present Students:"<<endl;
                for (int i = 0; i < 10; i++) {
                    if (attend[i] == 'P') {
                        cout<<roll[i]<<" ";
                    }
                }
                cout<<endl;
                break;

            case 4:
                cout<<"Exiting program."<<endl;
                break;

            default:
                cout<<"Invalid choice! Please try again."<<endl;
        }

    } while (choice != 4);

    return 0;
}
