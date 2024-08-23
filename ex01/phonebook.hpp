/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:30:44 by emencova          #+#    #+#             */
/*   Updated: 2024/07/26 15:31:07 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

using	namespace std;

class	Contact
{
public:
    string FirstName;
    string LastName;
    string NickName;
    string PhoneNumber;
    string Darkest_Secret;
    
    string formatString(const string str)
    {
        if (str.size() > 10)
            return str.substr(0, 9) + ".";
        else
            return str;
    }
    void printContact(int index)
    {
        Contact PB;
        cout << setw(10) << right << index + 1 << " | "
             << setw(10) << right << formatString(FirstName) << " | "
             << setw(10) << right << formatString(LastName) << " | "
             << setw(10) << right << formatString(NickName) << " |" << endl;
    }

    void displayFullContact()
    {
        Contact PB;
        cout << "First name: " << FirstName << endl;
        cout << "Last name: " << LastName << endl;
        cout << "Nick name: " << NickName << endl;
        cout << "Phone number: " << PhoneNumber << endl;
        cout << "Darkest secret: " << Darkest_Secret << endl;
    }
    
    void setFirstName(const string& firstName)
    {
        FirstName = firstName;
    }

    void setLastName(const string& lastName)
    {
        LastName = lastName;
    }

    void setNickName(const string& nickName)
    {
        NickName = nickName;
    }

    void setPhoneNumber(const string& phoneNumber)
    {
        PhoneNumber = phoneNumber;
    }

    void setDarkestSecret(const string& darkestSecret)
    {
        Darkest_Secret = darkestSecret;
    }
    
};

class PhoneBook
{
public:
    Contact Contacts[8];
    int     nbr ;
    int     current;
    
    PhoneBook()
    {
        current = 0;
        nbr = 0;
    }
};

#endif
