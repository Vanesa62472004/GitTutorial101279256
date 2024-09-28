// header guard
#ifndef __FILE_H__
#define __FILE_H__

#include <iostream>
#include <string>

#include "Date.h"

using namespace std;

class File {
    public:
        // Default constructor, not applicable
        
        // Constructor with arguments
        File(const string& inName, const string& inContent, const Date& date);
        
        // getters
        const Date& getDate() const;
        string getName ( );
        string getContent ( );

        // helpers
        bool lessThan(const File& other) const;
        
        // print function
        void print( );
        void printContents( );


    private:
        string name;
        string content;
        Date date;        

};


#endif /* __FILE_H__ */
