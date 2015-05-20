#ifndef CUSTOMERCOLLECTION_H
#define CUSTOMERCOLLECTION_H
#include "customer.h"

using namespace std;

class customerCollection
{
    public:
        customerCollection();
        ~customerCollection();



        void printCustomerList(const vector<customer>&);
        void addCustomer(customer person);
        vector<customer> getCustomers();

    private:

        vector<customer> customerArchive;
        void addCustomers(vector<customer>& newCustomerArchive);
};

#endif // CUSTOMERCOLLECTION_H
