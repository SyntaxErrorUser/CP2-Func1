/*
    Accepts 2 value and has a choice from MDAS.
    The User of the system sometimes make mistake make sure only accept values stated on main menu.
    The owner also want to make the system loop so it can solve problems without reopening the system.
*/ 

#include <iostream>
using namespace std;
int MainMenu();
int main(){
    int n1, n2, choice;
    char continueChoice = 'y';

    do
    {
        do
        {
        	choice = MainMenu();
        	switch (choice)
            {
            case 1:
                cout << "Enter 1st Value: ";
                cin >> n1;
                cout << "Enter 2nd Value: ";
                cin >> n2;
                cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
                break;
                
            case 2:
                cout << "Enter 1st Value: ";
                cin >> n1;
                cout << "Enter 2nd Value: ";
                cin >> n2;
                cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
                break;
                
            case 3:
                cout << "Enter 1st Value: ";
                cin >> n1;
                cout << "Enter 2nd Value: ";
                cin >> n2;
                cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n";
                break;
                
            case 4:
                cout << "Enter 1st Value: ";
                cin >> n1;
                cout << "Enter 2nd Value: ";
                cin >> n2;
                cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n";
                break;
                
            default:
                cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        cout << "Continue? [y/n]: ";
        cin >> continueChoice;

        system("cls");

    } while (continueChoice == 'y');
}
int MainMenu(){
    int choice;	
        cout
            << "--- Operation Selection ---\n"
            << "1. Add\n"
            << "2. Subtract\n"
            << "3. Multiply\n"
            << "4. Divide\n"
            << "\n"
            << "Enter Operation: ";
        cin >> choice;

        system("cls");

        return choice;
}
