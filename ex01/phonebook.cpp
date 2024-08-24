
#include "PhoneBook.hpp"

void searchContacts(PhoneBook &PPBB)
{
    system("clear");

    if (PPBB.nbr == 0) {
        std::cout << "0 contacts." << std::endl;
        return;
    }
    
    std::cout << std::setw(10) << std::right << "Index" << " | "
             << std::setw(10) << std::right << "First Name" << " | "
             << std::setw(10) << std::right << "Last Name" << " | "
             << std::setw(10) << std::right << "Nick Name" << " |" << std::endl;

    for (int i = 0; i < PPBB.nbr; i++) {
        PPBB.Contacts[i].printContact(i);
    }

    int index;
    std::cout << "Enter the index number to view the contact details: ";

    while (!(std::cin >> index))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input! Please enter a valid number: ";
    }

    if (index > 0 && index <= PPBB.nbr) {
        system("clear");
        PPBB.Contacts[index - 1].displayFullContact();
    } else {
        std::cout << "Invalid index!" << std::endl;
    }

    std::cout << "Press any key to return to the menu." << std::endl;
    std::cin.ignore();
    std::cin.get();
}


int main()
{
    PhoneBook PPBB;
    std::string cmnd;
    std::string input;

    while (1) 
    {
        system("clear");
        std::cout << "ADD - 1 | SEARCH - 2 | EXIT - 3" << std::endl;
        std::cin >> cmnd;

        if (cmnd == "ADD" || cmnd == "1") 
        {
            system("clear");
            std::cout << "Enter your first name: ";
            std::cin >> input;
            PPBB.Contacts[PPBB.current].setFirstName(input);

            std::cout << "Enter your last name: ";
            std::cin >> input;
            PPBB.Contacts[PPBB.current].setLastName(input);

            std::cout << "Enter your nickname: ";
            std::cin >> input;
            PPBB.Contacts[PPBB.current].setNickName(input);

            std::cout << "Enter your phone number: ";
            std::cin >> input;
            PPBB.Contacts[PPBB.current].setPhoneNumber(input);

            std::cout << "Enter your darkest secret: ";
            std::cin >> input;
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
