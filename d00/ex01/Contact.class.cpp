


# include "Contact.class.hpp"

Contact::Contact(void) {
    return;
}

Contact::~Contact(void) {
    return;
}

void    Contact::printing(void) {



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