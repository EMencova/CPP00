#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class    Contact
{
public:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string Darkest_Secret;
    
    std::string formatString(const std::string str)
    {
        if (str.size() > 10)
            return str.substr(0, 9) + ".";
        else
            return str;
    }
   void printContact(int index)
    {
        Contact PB;
        std::cout << std::setw(10) << std::right << index + 1 << " | "
             << std::setw(10) << std::right << formatString(FirstName) << " | "
             << std::setw(10) << std::right << formatString(LastName) << " | "
             << std::setw(10) << std::right << formatString(NickName) << " |" << std::endl;
    }

    void displayFullContact()
    {
        Contact PB;
        std::cout << "First name: " << FirstName << std::endl;
        std::cout << "Last name: " << LastName << std::endl;
        std::cout << "Nick name: " << NickName << std::endl;
        std::cout << "Phone number: " << PhoneNumber << std::endl;
        std::cout << "Darkest secret: " << Darkest_Secret << std::endl;
    }
    
    void setFirstName(const std::string& firstName)
    {
        FirstName = firstName;
    }

    void setLastName(const std::string& lastName)
    {
        LastName = lastName;
    }

    void setNickName(const std::string& nickName)
    {
        NickName = nickName;
    }

    void setPhoneNumber(const std::string& phoneNumber)
    {
        PhoneNumber = phoneNumber;
    }

    void setDarkestSecret(const std::string& darkestSecret)
    {
        Darkest_Secret = darkestSecret;
    }
    
};

#endif
