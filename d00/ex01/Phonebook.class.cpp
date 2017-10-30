
# include "Phonebook.class.hpp"

Phonebook::Phonebook(void) {
    count = 0;
    return;
}

Phonebook::~Phonebook(void) {
    return;
}

//void	Phonebook::AddContact(Contact *contact) {
//    contacts[count] = *contact;
//    count++;
//}
//
//Contact	*Phonebook::GetContact(int index) {
//    int i;
//
//    i = 0;
//    while (i < count)
//    {
//        if (contacts[i].index == index)
//            return (&contacts[i]);
//        i++;
//    }
//    return (0);
//}
//
//void	Phonebook::SomeContact(void (Contact::*func)(void)) {
//    int		i;
//
//    i = 0;
//    while (i < count)
//    {
//        (contacts[i].*func)();
//        std::cout << std::endl;
//        i++;
//    }
//}