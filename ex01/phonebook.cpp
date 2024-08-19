
#include "phonebook.hpp"


int main()
{
    PhoneBook PB;
    string cmnd;
    PhoneBook.nbr = 1;
    
    while (1)
    {
        system("clear");
        cout<<" ADD - 1 SEARCH - 2 EXIT - 3 " << endl;
        cin>> cmnd;
        
        if (cmnd == "ADD" || cmnd == "1")
        {
            system("clear");
            cout << "Enter your first name: ";
            cin>>PB.FirstName;
            cout<< "Enter your last name: ";
            cin>>PB.LastName;
            cout<< "Enter your nickname: ";
            cin>>PB.NickName;
            cout<< "Enter your phone number: ";
            cin>>PB.PhoneNumber;
            cout<< "Enter your darkest secret: ";
            cin>>PB.Darkest_Secret;
        }
        if (cmnd == "SEARCH" || cmnd == "2")
        {
            system("clear");
            cout<< PB.Contacts << " | " ;
            cout<<"First name: "<<PB.FirstName
            cout<<" | " ;
            cout<<"Last name: "<<PB.LastName
            cout<< " | " ;
            cout<< "Nick name" <<PB.Nickname
        }
    }
}
