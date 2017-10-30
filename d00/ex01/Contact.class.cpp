
# include "Contact.class.hpp"

Contact::Contact(void) {
    return;
}

Contact::~Contact(void) {
    return;
}

void    Contact::printing(void) {
    static int	space_number;
    static int	i;

    space_number = 0;
    i = 0;
    while (i < 9)
    {
        std::cout << ' ';
        i++;
    }
    std::cout << index << '|';
    if ((space_number = (int)first_name.length()) < 10)
    {
        space_number = 10 - space_number;
        std::cout << std::string(space_number, ' ') << first_name << '|';
    }
    else
    {
        i = 0;
        while (i < 9)
        {
            std::cout << first_name[i];
            i++;
        }
        std::cout << '.' << '|';
    }
    if ((space_number = (int)last_name.length()) < 10)
    {
        space_number = 10 - space_number;
        std::cout << std::string(space_number, ' ') << last_name << '|';
    }
    else
    {
        i = 0;
        while (i < 9)
        {
            std::cout << first_name[i];
            i++;
        }
        std::cout << '.' << '|';
    }
    if ((space_number = (int)nickname.length()) < 10)
    {
        space_number = 10 - space_number;
        std::cout << std::string(space_number, ' ') << nickname << '|';
    }
    else
    {
        i = 0;
        while (i < 9)
        {
            std::cout << first_name[i];
            i++;
        }
        std::cout << '.' << '|' << '\n';
    }
}

void	Contact::printing_information(void) {
    std::cout << first_name << std::endl;
    std::cout << last_name << std::endl;
    std::cout << nickname << std::endl;
    std::cout << login << std::endl;
    std::cout << postal_address << std::endl;
    std::cout << email_address << std::endl;
    std::cout << phone_number << std::endl;
    std::cout << birthday_date << std::endl;
    std::cout << favorite_meal << std::endl;
    std::cout << underwear_color << std::endl;
    std::cout << darkest_secret << std::endl;
}