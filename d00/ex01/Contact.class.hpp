
#ifndef CPP_CONTACT_CLASS_H
#define CPP_CONTACT_CLASS_H
# include <iostream>
# include <string>
# include <cstring>
#include <iomanip>
# include <cstdlib>


class Contact {

public:
    int		    index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;

    Contact(void);
    ~Contact(void);

    void printing(void);
    void printing_information(void);
};

#endif
