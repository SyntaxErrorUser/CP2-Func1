/*
    Accepts 2 value and has a choice from MDAS.
    The User of the system sometimes make mistake make sure only accept values stated on main menu.
    The owner also want to make the system loop so it can solve problems without reopening the system.
*/ 

#include <iostream>
using namespace std;
int main()
{
    int x, y, choice;
    char continueChoice = 'yes';

    do
    {
        do
        {
            cout
                << "--- Please Select for Math Solution to use ---\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
            cin >> choice;

            system("cls");

            switch (choice)
            {
            case 1:
                cout << "Please input value 1:";
                cin >> x;
                cout << "Please input value 2:";
                cin >> y;
                cout << x << " + " << y << " = " << x + y << "\n";
                break;
            case 2:
                cout << "Please input value 1:";
                cin >> x;
                cout << "Please input value 2:";
                cin >> y;
                cout << x << " - " << y << " = " << x - y << "\n";
                break;
            case 3:
                cout << "Please input value 1:";
                cin >> x;
                cout << "Please input value 2:";
                cin >> y;
                cout << x << " * " << y << " = " << x * y << "\n";
                break;
            case 4:
                cout << "Please input value 1:";
                cin >> x;
                cout << "Please input value 2:";
                cin >> y;
                cout << x << " / " << y << " = " << x / y << "\n";
                break;
            default:
                cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        cout << "Do you want to Continue [yes/no]:";
        cin >> continueChoice;

        system("cls");

    } while (continueChoice == 'yes');
}
