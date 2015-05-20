#include "customer.h"

    // Note the customer is only allowed to have one dvd copy.
    static const int    RENTLIMIT = 10,
                        MaxPin = 5;

customer::customer()
{
    this->FirstName = "Staff";
    this->LastName = "Member";
    this->staff = true;
    this->Address = " ";
    this->PhoneNumber = 0;
    this->Username = "staff";
    this->Password = "today123";
}

customer::customer(string FName, string LName, string NewAddress, int Phone, string pin)
{
    FirstName = FName;
    LastName = LName;
    Address = NewAddress;
    PhoneNumber = Phone;
    staff = false;

    setUsername();
    setPassword(pin);
}

customer::~customer()
{
    //dtor
}

void customer::setUsername() {
    Username += FirstName + LastName;
}

void customer::setPassword(string pin) {
    Password = pin;
}

void customer::rentMovie(string Movie) {


}

void customer::unrentMovie(string Movie) {

}


void customer::displayRentedMovies() {
}

void customer::DisplayPhoneNumber() {
        cout << "Customer Phone: " << this->getPhoneNumber() <<endl;
        cout << endl;
}

void customer::DisplayDetails() {
        cout << "Customer Name: " << this->getFirstName() << endl;
        cout << "Customer Surname: " << this->getLastName() << endl;
        cout << "Customer Address: " << this->getAddress() << endl;
        cout << "Customer Phone: " << this->getPhoneNumber() <<endl;
        cout << "Customer Username: " << this->getUsername() <<endl;
        cout << "Customer Password: " << this->getPassword() <<endl;
}
string customer::getFirstName() const {
    return FirstName;
}

string customer::getLastName() const{
    return LastName;
}

string customer::getAddress() const{
    return Address;
}

string customer::getUsername() const{
    return Username;
}

string customer::getPassword() const{
    return Password;
}

int customer::getPhoneNumber() const{
    return PhoneNumber;
}

bool customer::isStaff(){
    return this->staff;
}


