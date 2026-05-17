#include <iostream>
#include <string>

using namespace std;

string DecTo_N_(int D)
{
    string alphabet = "01LMNPS";
    string result = "";

    if (D == 0)
        return "0";

    while (D > 0)
    {
        int remainder = D % 7;

        result = alphabet[remainder] + result;

        D = D / 7;
    }

    return result;
}

int main()
{
    int number;
    char choice;

    do
    {
        cout << "Enter decimal number: ";

        while (!(cin >> number))
        {
            cout << "Error! Enter only integer numbers: ";

            cin.clear();
            cin.ignore(1000, '\n');
        }

        while (number < 0)
        {
            cout << "Error! Number must be non-negative: ";

            while (!(cin >> number))
            {
                cout << "Error! Enter only integer numbers: ";

                cin.clear();
                cin.ignore(1000, '\n');
            }
        }

        cout << "Result in 7-system: "
            << DecTo_N_(number) << endl;

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program finished." << endl;

    return 0;
}
