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
# include "Contact.hpp"

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
