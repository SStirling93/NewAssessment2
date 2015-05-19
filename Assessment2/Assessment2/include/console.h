#ifndef Console_H
#define Console_H

#include <windows.h>
#include <string>

using namespace std;

class Console
{
    public:
        /** \brief
         * Defult initialiser.
         *
         */
        Console();
        ~Console();


        /** \brief
         * Clears and sets up the console screen buffer.
         *
         */
        void refresh();


        /** \brief
         * Sets the title of the console.
         *
         */
        void setTitle(char* title);
};

#endif // Console_H
