#ifndef movie_h
#define movie_h
#include <string>
#include <vector>

using namespace std;


/** \brief
 *  Movie ADT stores the data of a movie.
 * \var title string - Title of the movie.
 * \var starring string - Names of the actors starring in the movie.
 * \var director string - Name of the director of the movie.
 * \var duration string - Duration of the movie.
 * \var genre string - Genre of the moive.
 * \var rating string - Classification rating of the movie.
 * \var release string - Date or year the movie was released.
 */

using namespace std;

class Movie
{
    public:


        /** \brief
         *  Defult Movie constructor.
         * \return Movie - An empty instance of a Movie.
         */

        Movie();


        /** \brief
         *  Complete Movie constructor.
         * \param title string - Title of the movie.
         * \param starring string - Names of the actors starring in the movie.
         * \param director string - Name of the director of the movie.
         * \param duration string - Duration of the movie.
         * \param genre string - Genre of the moive.
         * \param rating string - Classification rating of the movie.
         * \return Movie - A complete instance of a Movie.
         */

        Movie(const string title, const  string starring, const string director, const string duration, const string genre, const string rating, const string release);


        /** \brief
         *  Defult Movie destructor.
         */
        ~Movie();


        /** \brief
         *  Gets the title of the movie.
         * \return string - Title of the movie.
         */

        string getTitle() const;


        /** \brief
         *  Gets the starring actors of the movie.
         * \return string - Starring actors of the movie.
         */

        string getStars() const;


        /** \brief
         *  Gets the director of the movie.
         * \return string - Name of the director of the movie.
         */

        string getDirector() const;



        /** \brief
         *  Gets the duration of the movie.
         * \return string - Duration of the movie.
         */

        string getDuration() const;


        /** \brief
         *  Gets the genre of the movie.
         * \return string - Genre of the movie.
         */

        string getGenre() const;



        /** \brief
         *  Gets the classification rating of the movie.
         * \return string - Classification rating of the movie.
         */

        string getRating() const;


        /** \brief
         *  Gets the release date or year of the movie.
         * \return string - Release date or year of the movie.
         */

        string getReleased() const;


        /** \brief
         *  Sets the title of the movie.
         * \param title string - Title of the movie.
         */

        void setTitle(const string title);


        /** \brief
         *  Sets the starring actors of the movie.
         * \param stars string - Starring actors of the movie.
         */

        void setStars(string stars);



        /** \brief
         *  Sets the director of the movie.
         * \param director string - Director of the movie.
         */

        void setDirector(const string director);


        /** \brief
         *  Sets the duration of the movie.
         * \param duration string - Duration of the movie.
         */

        void setDuration(const string duration);



        /** \brief
         *  Sets the genre of the movie.
         * \param genre string - Genre of the movie.
         */

        void setGenre(const string genre);


        /** \brief
         *  Sets the classification rating of the movie.
         * \param rating string - Classification rating of the movie.
         */

        void setRating(const string rating);


        /** \brief
         *  Sets the release date or year of the movie.
         * \param released string - Release date or year of the movie.
         */

        void setReleased(const string released);

    private:

        /**\var title string - Title of the movie.
         * \var starring string - Names of the actors starring in the movie.
         * \var director string - Name of the director of the movie.
         * \var duration string - Duration of the movie.
         * \var genre string - Genre of the moive.
         * \var rating string - Classification rating of the movie.
         * \var release string - Date or year the movie was released.
         */
        string title;
        string starring;
        string director;
        string duration;
        string genre;
        string rating;
        string release;
};

#endif // movie_h
