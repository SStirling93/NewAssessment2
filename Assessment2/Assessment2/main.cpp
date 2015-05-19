#include "store.h"

using namespace std;

int main() {
    //system("mode 80, 500");
//    Console console = Console();
//    console.refresh();
//    movieCollection movies = movieCollection();
//
//    string line;
//    ifstream myfile ("src/movies.txt");
//    if (myfile.is_open())
//    {
//        int input = 0;
//        Movie aMovie = Movie();
//        while ( getline (myfile,line,';')) {
//            if(input > 6) {
//                movies.insert(aMovie);
//                aMovie = Movie();
//                input = 0;
//            }
//            switch(input) {
//                case 0: aMovie.setTitle(line);
//                        break;
//                case 1: aMovie.setReleased(line);
//                        break;
//                case 2: aMovie.setGenre(line);
//                        break;
//                case 3: aMovie.setDuration(line);
//                        break;
//                case 4: aMovie.setDirector(line);
//                        break;
//                case 5: aMovie.setRating(line);
//                        break;
//                case 6: aMovie.setStars(line);
//                        break;
//            }
//            ++input;
//        }
//        myfile.close();
//    } else cout << "Unable to open file";
//
//    movies.inOrderTraversal();
//    cout << movies.size() << endl;
    Store rentalStore = Store();
    return 0;
}
