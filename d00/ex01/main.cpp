
# include "Contact.class.hpp"
# include "Phonebook.class.hpp"

int     main() {

    int i;
    int index;
    char buffer[512];

    Phonebook phonebook;
    Contact contact;
    Contact *contact_x;


    std::cout << "Please, enter ADD, EXIT or SEARCH" << std::endl;
    std::cin >> buffer;

    index = 1;
    i = 0;
    while (buffer[i] != 0)
    {
        if (buffer[i] >= 'A' &&  buffer[i] <= 'Z' )
            buffer[i] = (char)tolower(buffer[i]);
        i++;
    }
    while (strcmp(buffer, "exit") != 0) {

        if (strcmp(buffer, "search") == 0) {
            std::cout << "     index|first name| last name|  nickname|" << std::endl;
            phonebook.SomeContact(&Contact::printing);
            std::cout << "Add an index to get more information." << std::endl;
            std::cin >> buffer;
            i = std::atoi(buffer);
            if ((contact_x = phonebook.GetContact(i)))
                contact_x->printing_information();
        }

        else if (strcmp(buffer, "add") == 0) {
            if(index >= 10) {
                std::cout << "The phonebook is full. You have to restart program!" << std::endl;
            }
            else
            {
                std::cout << "Enter your first name:" << std::endl;
                std::cin >> contact.first_name;
                std::cout << "Enter your last name:" << std::endl;
                std::cin >> contact.last_name;
                std::cout << "Enter your nickname:" << std::endl;
                std::cin >> contact.nickname;
                std::cout << "Enter your login:" << std::endl;
                std::cin >> contact.login;
                std::cout << "Enter your postal address:" << std::endl;
                std::cin >> contact.postal_address;
                std::cout << "Enter your email address:" << std::endl;
                std::cin >> contact.email_address;
                std::cout << "Enter your phone number:" << std::endl;
                std::cin >> contact.phone_number;
                std::cout << "Enter your birthday date:" << std::endl;
                std::cin >> contact.birthday_date;
                std::cout << "Enter your favorite meal:" << std::endl;
                std::cin >> contact.favorite_meal;
                std::cout << "Enter your underwear color:" << std::endl;
                std::cin >> contact.underwear_color;
                std::cout << "Enter your darkest secret:" << std::endl;
                std::cin >> contact.darkest_secret;
                contact.index = index;
                phonebook.AddContact(&contact);
                index++;
            }
        }
        else {
            std::cout << "This is wrong command" << std::endl;
        }

        std::cout << "Please, enter ADD, EXIT or SEARCH" << std::endl;
        std::cin >> buffer;

    }
    std::cout << "Closing phonebook" << std::endl;
    return (0);
};