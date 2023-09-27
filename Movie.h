/**
 * QUESTION:
 * 2. What are these? Why do we use them?
*/


#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>

using namespace std;

class Movie{
    private:
        int num;
        string *title_pointer;

    public:
        /**
         * QUESTION:
         * 3. What are these functions? How are they different?
         * How can we call each of them?
         */


        Movie();
        Movie(int n, string const &str);
        Movie(Movie const &s);


        /**
         * QUESTION:
         * 4. This isn't a constructor, but it is still important. Why is that?
         * 
         * 5. Why do we return a 'Movie&'?
         */


        Movie & operator=(Movie const &s);



        /**
         * QUESTION:
         * 6. How is the `const` keyword
         * different in these two cases?
         */


        void set_title_pointer_memory(string const &str);
        string get_str_from_title_pointer() const;


        /**
         * QUESTION:
         * 7. How are these functions different?
         */


        void num_inc_value(int n);
        void num_inc_reference(int &n);


        /**
         * QUESTION:
         * 8. Without looking at the implementation
         * What *should* the destructor do?
         */

        ~Movie();

        /**
         * QUESTION:
         * 9.What does this do?
         * Why do we define it as
         * a friend function?
         */
        
        friend ostream& operator<<(ostream &o, Movie const &s){
            o << "num=" << s.num;
            o << " | title_pointer points to ";

            if (s.title_pointer == nullptr){
                o << "a nullptr";
                return o;
            }

            /**
             * QUESTION:
             * 10. What could happen if we didn't
             * have the above check?
             */
            o << *(s.title_pointer);
            return o;
        }

};



#endif






