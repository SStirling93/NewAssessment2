#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class customer
{
    public:
        customer();
        customer(string FName, string LName, string Address, int Phone, string pin);
        ~customer();


    void rentMovie(string Movie);

    void unrentMovie(string Movie);

    void displayRentedMovies();

    void setUsername();

    void setPassword(string Pin);

    void DisplayDetails();

    string getFirstName() const;

    string getLastName() const;

    string getAddress() const;

    string getUsername() const;

    string getPassword() const;

    int getPhoneNumber() const;

    bool isStaff();



    private:


    string  FirstName,
            LastName,
            Address,
            Username,
            Password;

    vector<string> rentingRecord;

    bool staff;
    int PhoneNumber;




};

#endif // CUSTOMER_H
