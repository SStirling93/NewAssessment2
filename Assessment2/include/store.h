#ifndef Store_h
#define Store_h

#include <iostream>
#include <conio.h>
#include <limits>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "console.h"
#include "movieCollection.h"
#include "movie.h"
#include "customerCollection.h"
#include "customer.h"

using namespace std;

class Store
{
    public:
        Store();
        ~Store();
        void login();
    private:
        void staffMenu(int options);
        void manageMovies(int options);
        void addMovie();
        void deleteMovie();
        void findMovie();
        void displayCurrentlyRenting();
        void manageCustomers(int options);
        void addCustomer();
        void deleteCustomer();
        void findCustomer();
        void displayCustomer();
        void displayCurrentlyRenting(customer person);
        void logout();
        void customerMenu(int options);
        void browseMovies();
        void rentMovie();
        void topTenMovies();
        void returnMovie();
        void loadMovies();
        Console console;
        movieCollection rentals;
        customerCollection customers;
        vector<customer> currentUser;
};

#endif // Store_h
