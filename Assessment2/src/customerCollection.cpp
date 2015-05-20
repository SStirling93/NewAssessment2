#include "customerCollection.h"


customerCollection::customerCollection()
{
    addCustomers(customerArchive);
    printCustomerList(customerArchive);
}

customerCollection::~customerCollection()
{
    //dtor
}


void customerCollection::addCustomers(vector<customer>& newCustomerArchive) {

        string  Names[] = {"Bobby","Kyle","Jason","Mason","Edward"},
                Surnames[] ={"Smith", "Marsh", "Peterson", "Rock", "Sisscors"},
                Address[] = {"42 Rockhamp st", "37 damuel rd", "55 court av", "2 blunder st" , "14 Samuel court"},
                Passwords[] = {"1358", "3411", "3245", "1112", "6785"};
        int     PhoneNumbers[] = {12345678, 87654321, 12123434, 59098787, 45645678};

        int listSize = 5;

        for (int i=0; i < listSize; i++) {
            customer newCustomer(Names[i], Surnames[i], Address[i], PhoneNumbers[i], Passwords[i]);
            newCustomerArchive.push_back(newCustomer);
        }
}

void customerCollection::addCustomer(customer person) {
    this->customerArchive.push_back(person);
}

void customerCollection::removeCustomer(customer person) {

}


vector<customer> customerCollection::getCustomers(){
    return this->customerArchive;
} // end customerCollection::getCustomters();

void customerCollection::printCustomerList(const vector<customer>& newCustomerArchive) {
    unsigned int size = newCustomerArchive.size();

    for (unsigned int i =0; i < size; i++) {
        cout << "Customer Name: " << newCustomerArchive[i].getFirstName() << endl;
        cout << "Customer Surname: " << newCustomerArchive[i].getLastName() << endl;
        cout << "Customer Address: " << newCustomerArchive[i].getAddress() << endl;
        cout << "Customer Phone: " << newCustomerArchive[i].getPhoneNumber() <<endl;
        cout << "Customer Username: " << newCustomerArchive[i].getUsername() <<endl;
        cout << "Customer Password: " << newCustomerArchive[i].getPassword() <<endl;
        cout << endl;
    }
}
