#include <iostream>
#include <ctime>
using namespace std;

int main() {
    char ret;
    do {
            int choice;
            int cycle = 1;
            cout<<"==================================="<<endl;
            cout<<"   SMART TRAFFIC LIGHT SIMULATOR"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Modes: \n"<<"1. Normal Mode\n"<<"2. Rush Hour Mode\n"<<"3. Night Mode\n"<<"4. Exit System\n";
            cout<<"Enter choice: ";
            cin>>choice;
            switch(choice) {
                    case 1:
                        cycle1:
                        cout<<"=== NORMAL MODE ACTIVATED ===\n";
                        cout<<"Cycle : "<<cycle<<endl;
                        cout<<"\nGREEN LIGHT: 30 seconds\n";
                        cout<<endl;

                        for (int i = 30; i >=0; i--) {
                            cout<<i<<" ";
                            cout.flush();
                            int start = time(0);
                            while(time(0) - start < 0.5);
                        }

                        cout<<endl;
                        cout<<"\nYELLOW LIGHT: 5 seconds\n";

                        for (int i = 5; i >=0; i--) {
                            cout<<i<<" ";
                            cout.flush();
                            int start = time(0);
                            while(time(0) - start < 1);
                        }

                        cout<<endl;
                        cout<<"\nRED LIGHT: 30 seconds\n";

                        for (int i = 30; i >=0; i--) {
                            cout<<i<<" ";
                            cout.flush();
                            int start = time(0);
                            while(time(0) - start < 1);
                        }
                        cycle++;
                        cout<<endl;
                        break;

                    case 2:
                        cycle2:
                        cout<<"=== RUSH HOUR MODE ACTIVATED ===\n";
                        cout<<"Cycle : "<<cycle<<endl;
                        cout<<"\nGREEN LIGHT: 20 seconds\n";
                        cout<<endl;

                        for (int i = 20; i >=0; i--) {
                            cout<<i<<" ";
                            cout.flush();
                            int start = time(0);
                            while(time(0) - start < 1);
                        }

                        cout<<endl;
                        cout<<"\nYELLOW LIGHT: 5 seconds\n";

                        for (int i = 20; i >=0; i--) {
                            cout<<i<<" ";
                            cout.flush();
                            int start = time(0);
                            while(time(0) - start < 1);
                        }

                        cout<<endl;
                        cout<<"\nRED LIGHT: 40 seconds\n";

                        for (int i = 40; i >=0; i--) {
                            cout<<i<<" ";
                            cout.flush();
                            int start = time(0);
                            while(time(0) - start < 1);
                        }
                        cycle++;
                        cout<<endl;
                        break;

                    case 3:
                        cycle3:
                        cout<<"=== NIGHT MODE ACTIVATED ===\n";
                        cout<<"Cycle : "<<cycle<<endl;
                        cout<<"\nGREEN LIGHT: 2 seconds\n";
                        cout<<endl;

                        for (int i = 2; i >=0; i--) {
                            cout<<i<<" ";
                            cout.flush();
                            int start = time(0);
                            while(time(0) - start < 1);
                        }

                        cout<<endl;
                        cout<<"\nYELLOW LIGHT: 2 seconds\n";

                        for (int i = 2; i >=0; i--) {
                            cout<<i<<" ";
                            cout.flush();
                            int start = time(0);
                            while(time(0) - start < 1);
                        }
                        cycle++;
                        cout<<endl;
                        break;

                    case 4:
                        return 1;
            }

            cout<<"\n(Press 'M to return to menu) ";
            cin>>ret;

            if (ret == 'M' || ret == 'm') {
                continue;
            }
            else if (choice == 1) {
                goto cycle1;
            }
            else if( choice == 2) {
                goto cycle2;
            }
            else if (choice == 3) {
                goto cycle3;
            }
    } while(true);
    return 0;
}
