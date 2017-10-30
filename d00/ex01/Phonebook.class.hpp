

#ifndef CPP_PHONEBOOK_CLASS_H
#define CPP_PHONEBOOK_CLASS_H
# include "Contact.class.hpp"


class Phonebook {

private:
    Contact contacts[8];
    int count;

public:
    Phonebook(void);
    ~Phonebook(void);

//    void AddContact(Contact *contact);
//    Contact	*GetContact(int index);
//    void SomeContact(void (Contact::*func)(void));

};
#endif
