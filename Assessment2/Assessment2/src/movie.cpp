#include "movie.h"


/** \brief
 *  Defult Movie constructor.
 * \return Movie - An empty instance of a Movie.
 */

Movie::Movie() {
    this->title = "";
    this->starring = "";
    this->director = "";
    this->duration = "";
    this->genre = "";
    this->rating = "";
    this->release = "";
} // end Movie::Movie();


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

Movie::Movie(const string title, const string starring, const string director, const string duration, const string genre, const string rating, const string release) {

    this->title = title;
    this->starring = starring;
    this->director = director;
    this->duration = duration;
    this->genre = genre;
    this->rating = rating;
    this->release = release;

} // end Movie::Movie(...);


/** \brief
 *  Defult Movie destructor.
 */

Movie::~Movie() {
} // end Movie::~Movie();


/** \brief
 *  Gets the title of the movie.
 * \return string - Title of the movie.
 */

string Movie::getTitle() const {
    return this->title;
} // end Movie::getTitle();


/** \brief
 *  Gets the starring actors of the movie.
 * \return string - Starring actors of the movie.
 */

string Movie::getStars() const {
    return this->starring;
} // end Movie::getStars();


/** \brief
 *  Gets the director of the movie.
 * \return string - Name of the director of the movie.
 */

string Movie::getDirector() const {
    return this->director;
} // end Movie::getDirector();


/** \brief
 *  Gets the duration of the movie.
 * \return string - Duration of the movie.
 */

string Movie::getDuration() const {
    return this->duration;
} // end Movie::getDuration();


/** \brief
 *  Gets the genre of the movie.
 * \return string - Genre of the movie.
 */

string Movie::getGenre() const {
    return this->genre;
} // end Movie::getGenre();


/** \brief
 *  Gets the classification rating of the movie.
 * \return string - Classification rating of the movie.
 */

string Movie::getRating() const {
    return this->rating;
} // end Movie::getRating();


/** \brief
 *  Gets the release date or year of the movie.
 * \return string - Release date or year of the movie.
 */

string Movie::getReleased() const {
    return this->release;
} // end Movie::getReleased();


/** \brief
 *  Sets the title of the movie.
 * \param title string - Title of the movie.
 */

void Movie::setTitle(const string title) {
    this->title = title;
} // end Movie::setTitle(...);


/** \brief
 *  Sets the starring actors of the movie.
 * \param stars string - Starring actors of the movie.
 */

void Movie::setStars(const string stars) {
    this->starring = stars;
} // end Movie::setStars(...);


/** \brief
 *  Sets the director of the movie.
 * \param director string - Director of the movie.
 */

void Movie::setDirector(const string director) {
    this->director = director;
} // end Movie::setDirector(...);


/** \brief
 *  Sets the duration of the movie.
 * \param duration string - Duration of the movie.
 */

void Movie::setDuration(const string duration) {
    this->duration = duration;
} // end Movie::setDuration(...);


/** \brief
 *  Sets the genre of the movie.
 * \param genre string - Genre of the movie.
 */

void Movie::setGenre(const string genre) {
    this->genre = genre;
} // end Movie::setGenre(...);


/** \brief
 *  Sets the classification rating of the movie.
 * \param rating string - Classification rating of the movie.
 */

void Movie::setRating(const string rating) {
    this->rating = rating;
} // end Movie::setRating(...);


/** \brief
 *  Sets the release date or year of the movie.
 * \param released string - Release date or year of the movie.
 */

void Movie::setReleased(const string released) {
    this->release = released;
} // end Movie::setReleased(...);
