#include "store.h"

Store::Store(){
   this->console = Console();
   this->console.refresh();                 // setup the console.
   this->loadMovies();                      // load movies.
   this->customers = customerCollection();  // load default customers.
   this->customers.addCustomer(customer()); // add staff member.
   this->login();
} // end Store::Store();

Store::~Store(){

} // end Store::~Store();

void Store::login(){

    string username = "";
    string password = "";

    while(this->currentUser.size() == 0) {

        cout << "Please enter your username: ";
        cin >> username;

        cout << "Please enter your password: ";
        cin >> password;

        // check if username and password are correct.
        for(vector<customer>::iterator person = this->customers.getCustomers().begin(); person != this->customers.getCustomers().end(); ++person) {
             if(person->getUsername() == username && person->getPassword() == password){
                this->currentUser.push_back(*person);
                break;
             }
        } // end for loop

    } // end while loop

    if(this->currentUser.front().isStaff()){
        this->staffMenu(0);
    } else {
        this->customerMenu(0);
    }// end if

} // end Store::Login();

void Store::staffMenu(int options){
    int option = options;

    cout << endl << "1) Manage Movies" << endl;
    cout << "2) Manage Customers" << endl;
    cout << "0) Logout" << endl;

    if(option == 0) {   // check if there is an error in the previous option
        cout << endl << "Please enter an option: ";
    } else {
        cout << endl << "Please enter a vaild option: ";
    } // end if

    while(!(cin >> option)){    // check for wrong input type and loop until its right.
        cout << endl << "1) Manage Movies" << endl;
        cout << "2) Manage Customers" << endl;
        cout << "0) Logout" << endl;
        cout << endl << "Please enter a vaild option: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } // end while

    if(option < 0 || option > 2) {  // check if option is in the right bounds
        this->staffMenu(option);
    } // end if

    switch(option){
        case 0: this->logout();
                break;
        case 1: this->manageMovies(0);
                break;
        case 2: this->manageCustomers();
                break;
    } // end switch

} // end Store::staffMenu(...);


void Store::manageMovies(int options){
    int option = options;

    cout << endl << "1) Add Movie" << endl;
    cout << "2) Remove Movie" << endl;
    cout << "0) Logout" << endl;

    if(option == 0) {   // check if there is an error in the previous option
        cout << endl << "Please enter an option: ";
    } else {
        cout << endl << "Please enter a vaild option: ";
    } // end if

    while(!(cin >> option)){    // check for wrong input type and loop until its right.
        cout << endl << "1) Add Movie" << endl;
        cout << "2) Remove Movie" << endl;
        cout << "0) Back" << endl;
        cout << endl << "Please enter a vaild option: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } // end while

    if(option < 0 || option > 2) {  // check if option is in the right bounds
        this->staffMenu(option);
    } // end if

    switch(option){
        case 0: this->staffMenu(0);
                break;
        case 1: this->addMovie();
                break;
        case 2: this->deleteMovie();
                break;
    } // end switch
} // end Store::manageMovies();
void Store::addMovie(){
    string title = "",
           released = "",
           director = "",
           genre = "",
           staring = "",
           rating = "",
           duration = "";



} // end Store::addMovie();
void Store::deleteMovie(){

} // end Store::deleteMovie();
void Store::findMovie(){} // end Store::findMovie();
void Store::displayCurrentlyRenting(){} // end Store::displayCurrentlyRenting();
void Store::manageCustomers(){} // end Store::manageCustomers();
void Store::addCustomer(){} // end Store::addCustomer();
void Store::deleteCustomer(){} // end Store::deleteCustomer();
void Store::findCustomer(){} // end Store::findCustomer();
void Store::displayCustomer(customer person){} // end Store::displayCustomer(...);
void Store::displayCurrentlyRenting(customer person){} // end Store::displayCurrentlyRenting(...);
void Store::logout(){} // end Store::logout();


void Store::customerMenu(int options){
    int option = options;

    cout << endl << "1) Browse Movies A-Z" << endl;
    cout << "2) Top Ten Movies" << endl;
    cout << "3) Return Movie" << endl;
    cout << "0) Logout" << endl;

    if(option == 0) {   // check if there is an error in the previous option
        cout << endl << "Please enter an option: ";
    } else {
        cout << endl << "Please enter a vaild option: ";
    } // end if

    while(!(cin >> option)){    // check for wrong input type and loop until its right.
        cout << endl << "1) Browse Movies A-Z" << endl;
        cout << "2) Top Ten Movies" << endl;
        cout << "3) Return Movie" << endl;
        cout << "0) Logout" << endl;
        cout << endl << "Please enter a vaild option: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } // end while

    if(option < 0 || option > 3) {  // check if option is in the right bounds
        this->customerMenu(option);
    } // end if

    switch(option){
        case 0: this->logout();
                break;
        case 1: this->browseMovies();
                break;
        case 2: this->topTenMovies();
                break;
        case 3: this->returnMovie();
    } // end switch

} // end Store::customerMenu();


void Store::browseMovies(){} // end Store::browseMovies();
void Store::rentMovie(){} // end Store::rentMovie();
void Store::topTenMovies(){} // end Store::topTenMovies();
void Store::returnMovie(){} // end Store::returnMovie();


void Store::loadMovies(){
    string line;
    ifstream file ("src/movies.txt");
    if (file.is_open()){

        int input = 0;
        Movie aMovie = Movie();
        while (getline(file,line,';')) {
            if(input > 6) {
                this->rentals.insert(aMovie);
                aMovie = Movie();
                input = 0;
            }
            switch(input) {
                case 0: aMovie.setTitle(line);
                        break;
                case 1: aMovie.setReleased(line);
                        break;
                case 2: aMovie.setGenre(line);
                        break;
                case 3: aMovie.setDuration(line);
                        break;
                case 4: aMovie.setDirector(line);
                        break;
                case 5: aMovie.setRating(line);
                        break;
                case 6: aMovie.setStars(line);
                        break;
            }
            ++input;
        }
        file.close();
    } else cout << "Unable to open file";

} // end Store::loadMovies();
