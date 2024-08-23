
#include "phonebook.hpp"

void searchContacts(PhoneBook &PPBB)
{
    system("clear");

    if (PPBB.nbr == 0) {
        cout << "0 contacts." << endl;
        return;
    }

    cout << setw(10) << right << "Index" << " | "
         << setw(10) << right << "First Name" << " | "
         << setw(10) << right << "Last Name" << " | "
         << setw(10) << right << "Nick Name" << " |" << endl;

    for (int i = 0; i < PPBB.nbr; i++) {
        PPBB.Contacts[i].printContact(i);
    }

    int index;
    cout << "Enter the index number to view the contact details: ";

    while (!(cin >> index))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please enter a valid number: ";
    }

    if (index > 0 && index <= PPBB.nbr) {
        system("clear");
        PPBB.Contacts[index - 1].displayFullContact();
    } else {
        cout << "Invalid index!" << endl;
    }

    cout << "Press any key to return to the menu." << endl;
    cin.ignore();
    cin.get();
}


int main()
{
    PhoneBook PPBB;
    string cmnd;
    string input;

    while (1) 
    {
        system("clear");
        cout << "ADD - 1 | SEARCH - 2 | EXIT - 3" << endl;
        cin >> cmnd;

        if (cmnd == "ADD" || cmnd == "1") 
        {
            system("clear");
            cout << "Enter your first name: ";
            cin >> input;
            PPBB.Contacts[PPBB.current].setFirstName(input);

            cout << "Enter your last name: ";
            cin >> input;
            PPBB.Contacts[PPBB.current].setLastName(input);

            cout << "Enter your nickname: ";
            cin >> input;
            PPBB.Contacts[PPBB.current].setNickName(input);

            cout << "Enter your phone number: ";
            cin >> input;
            PPBB.Contacts[PPBB.current].setPhoneNumber(input);

            cout << "Enter your darkest secret: ";
            cin >> input;
            PPBB.Contacts[PPBB.current].setDarkestSecret(input);

            PPBB.current = (PPBB.current + 1) % 8;

            if (PPBB.nbr < 8)
                PPBB.nbr++;
            
        }
        else if (cmnd == "SEARCH" || cmnd == "2") {
            searchContacts(PPBB);
        }
        else if (cmnd == "EXIT" || cmnd == "3") {
            break;
        }
    }

    return 0;
}
