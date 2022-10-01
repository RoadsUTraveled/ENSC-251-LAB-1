//
//  Date.hpp
//  ENSC 251 LAB 1
//
//  Created by Luo LanQing on 2022/9/30.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <iostream>
using namespace::std;

class Date
{
private:
    int month;
    int day;
    bool appointed[48];
public:
    //Constructors
    Date();
    Date(const int &month, const int &day);// Constructors with two initial parameters
    Date(const int &month, const int &day, const int &time);//Constructors with three initial parameters
    //Getters
    int getMonth() const; // Get the value of month
    int getDay() const;// Get value of day
    bool getAppointed(const int&) const; // Check Appoinment time
    //Setters
   
    void setMonth(const int);// Record the month of appoinment
    void setDay(const int);// Record the day of appoinment
    void setAppointed(int&, int&, int&, int&);// Record the hour of appoinmet and minute of appoinment
    //Additional member functions
    bool isHoliday(int month, int day) const;   //Check if the date is a holiday
    bool isWeekend(int Month, int Day ) const;   //Check if the date is a weekend
    bool isValidDay(int month, int day) const;     //Check if the user input falls in the assumed range.
    void output (ostream& outs) const;//
    void printFreeTimeSlots () const;// Print the all free time
    void printAppointedTimeSlots() const;// Print the all appointed time
    //Friend member functions
    friend bool equal(const Date&, const Date&);
};
#endif /* Date_hpp */
