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
//# include <iomanip>

using	namespace std;

class	contact
{
public:
    string FirstName;
    string LastName;
    string NickName;
    string PhoneNumber;
    string Darkest_Secret;
    
   /* void createContact()
     {
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
    
    void showContact()
    {
        cout<< PB.Contacts << " | " ;
        cout<<"First name: "<<FirstName
        cout<<" | " ;
        cout<<"Last name: "<<LastName
        cout<< " | " ;
        cout<< "Nick name" <<Nickname
        cout<< " | " ;
    }
    */
    
};

class PhoneBook
{
    public:
        Contacts[8];
    int     nbr;
};

#endif
