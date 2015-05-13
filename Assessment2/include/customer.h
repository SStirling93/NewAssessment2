#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>


using namespace std;

class customer
{
    public:
        customer();
        virtual ~customer();


    private:
    // Note the customer is only allowed to have one dvd copy.
    static const int RENTLIMIT = 10;

    string  FName,
            LName,
            Address,

            rentingRecord[RENTLIMIT];

    int phone;




};

#endif // CUSTOMER_H
