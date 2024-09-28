#include "File.h"

using namespace std;

// File(const string& inName, const string& inContent, const Date& date);

File::File(const string& inName, const string& inContent, const Date& date){}

const Date& File::getDate() const {
    return date;
}

string File::getContent ( ){
    return content;
}

string File::getName ( ){
    return name;
}


bool File::lessThan(const File& other) const {
    return date.lessThan(other.getDate());
}

void File::print( ) {
    cout << "File: " << name << endl;
    cout << "\nLast touched: " << endl;
    date.print( );
}

void File::printContents( ) {
    print( );
    cout << "Content: \n" << content << endl;
}
