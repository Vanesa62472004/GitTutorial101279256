
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


class Date {	
	public:
		//constructor
		Date();
		Date(int year, int month, int day);
		Date(const Date& d);
		
		//setters
		void setDay(int day);
		void setMonth(int month);
		void setYear(int year);
		
		void setDate(int year, int month, int day);
		void setDate(const Date& d);
		
		//getters
		int getDay() const;
		int getMonth() const;
		int getYear() const;
		string getMonthName() const;
		string getShortMonthName() const;
		
		//other
		bool isLeapYear(int year) const;
		bool lessThan(const Date& d) const;
		bool equals(const Date& d) const;

		
		void print() const;
		int convertToDays();
	
	private:
		//functions
		int getDaysInMonth() const;
			
	
		//variables
		int day;
		int month;
		int year;

		
	
};
#endif
