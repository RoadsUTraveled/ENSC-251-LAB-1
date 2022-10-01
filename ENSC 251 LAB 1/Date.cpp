//
//  Date.cpp
//  ENSC 251 LAB 1
//
//  Created by Luo LanQing on 2022/9/30.
//

#include <iostream>
#include <iomanip>
#include "Date.hpp"
using namespace::std;


const int Holidays[4][2] = {{9,19},{9,30},{10,12},{11,11}};// Seeting Information of holidays
const int Weekend[26][2] = {{9,10},{9,11},{9,17},{9,18},{9,24},{9,25},{10,1},{10,2},{10,8},
{10,9},{10,15},{10,16},{10,22},{10,23},{10,29},{10,30},{11,5},{11,6},{11,12},{11,13},
{11,19},{11,20},{11,26},{11,27},{12,3},{12,4}};// Seeting Information of Weekend


Date::Date()
{

}
Date::Date(const int &month, const int &day)
{
    this->month = month;
    this->day = day;
    for (int i = 0; i < 48; i++)
        appointed[i] = 0;
}
Date::Date(const int &month, const int &day, const int &time)
{
    this->month = month;
    this->day = day;
    appointed[time] = false;
}
int Date::getMonth() const
{
    return month;
}
void Date::printFreeTimeSlots() const
{
  if (month == 9)
  {
    cout << "September " << day << endl;
    for(int i = 0; i < 48; i++)
    {
        if(appointed[i] == 0) // To find free time
        {
            // Based on the index of appointment to get the cooresponding time
           if(i % 2 == 1)
            cout << "The time " << i /2 <<":30"<< "to" <<i/2+1 <<":00 is free" << endl;
           else
            cout << "The time " << i /2 <<":00"<< "to" <<i/2 <<":30 is free" << endl;
        }
        
    }
  }
  if (month == 10)
  {
    cout << "October " << day << endl;
    for(int i = 0; i < 48; i++)
    {
        // To find free time
        if(appointed[i] == 0)
        {
            // Based on the index of appointment to get the cooresponding time
           if(i % 2 == 1)
            cout << "The time " << i /2 <<":30"<< "to" <<i/2+1 <<":00 is free" << endl;
           else
            cout << "The time " << i /2 <<":00"<< "to" <<i/2 <<":30 is free" << endl;
        }
        
    }
  }
  if (month == 11)
  {
    cout << "November " << day << endl;
    for(int i = 0; i < 48; i++)
    {
        // To find free time
        if(appointed[i] == 0)
        {
           // Based on the index of appointment to get the cooresponding time
           if(i % 2 == 1)
            cout << "The time " << i /2 <<":30"<< "to" <<i/2+1 <<":00 is free" << endl;
           else
            cout << "The time " << i /2 <<":00"<< "to" <<i/2 <<":30 is free" << endl;
        }
        
    }
  }
  if (month == 12)
  {
    cout << "December " << day << endl;
    for(int i = 0; i < 48; i++)
    {
        // To find free time
        if(appointed[i] == 0)
        {
            // Based on the index of appointment to get the cooresponding time
           if(i % 2 == 1)
            cout << "The time " << i /2 <<":30"<< "to" <<i/2+1 <<":00 is free" << endl;
           else
            cout << "The time " << i /2 <<":00"<< "to" <<i/2 <<":30 is free" << endl;
        }
        
    }
  }


}
void Date::printAppointedTimeSlots() const
{
   if (month == 9)
  {
    cout << "September " << day << endl;
    for(int i = 0; i < 48; i++)
    {
        //To find appointment time
        if(appointed[i] == 1)
        {
            // Based on the index of appointment to get the cooresponding time
           if(i % 2 == 1)
            cout << "The time " << i /2 <<":30"<< "to" <<i/2+1 <<":00 have been appointed " << endl;
           else
            cout << "The time " << i /2 <<":00"<< "to" <<i/2 <<":30 have been appointed" << endl;
        }
        
    }
  }
  if (month == 10)
  {
    cout << "October " << day << endl;
    for(int i = 0; i < 48; i++)
    {
        //To find appointment time
        if(appointed[i] == 1)
        {
           // Based on the index of appointment to get the cooresponding time
           if(i % 2 == 1)
            cout << "The time " << i /2 <<":30"<< "to" <<i/2+1 <<":00 have been appointed " << endl;
           else
            cout << "The time " << i /2 <<":00"<< "to" <<i/2 <<":30 have been appointed" << endl;
        }
    }
  }
  if (month == 11)
  {
    cout << "November" << day << endl;
    for(int i = 0; i < 48; i++)
    {
        //To find appointment time
        if(appointed[i] == 1)
        {
            // Based on the index of appointment to get the cooresponding time
           if(i % 2 == 1)
            cout << "The time " << i /2 <<":30"<< "to" <<i/2+1 <<":00 have been appointed " << endl;
           else
            cout << "The time " << i /2 <<":00"<< "to" <<i/2 <<":30 have been appointed" << endl;
        }
    }
  }
  if (month == 12)
  {
    //To find appointment time
    cout << "December" << day << endl;
    for(int i = 0; i < 48; i++)
    {
        // Based on the index of appointment to get the cooresponding time
        if(appointed[i] == 1)
        {
           if(i % 2 == 1)
            cout << "The time " << i /2 <<":30"<< "to" <<i/2+1 <<":00 have been appointed " << endl;
           else
            cout << "The time " << i /2 <<":00"<< "to" <<i/2 <<":30 have been appointed" << endl;
        }
    }
  }
}
int Date::getDay() const
{
    return day;
}
bool Date::getAppointed(const int &time) const
{
    return appointed[time];
}
void Date::setMonth(int month)
{
    if((month < 9)||(month > 12))
    {
        cout << "You just only can choose September, October, November, December" << endl;
        exit(1);
    }
    this->month = month;
}
void Date::setDay( int day)
{
    this->day = day;
}
void Date::setAppointed(int &beginHour, int &beginMinute, int &endHour, int &endMinute)
{
    // Transfor the time to corresponding appointed index
    int BeginIndex, EndIndex;
    BeginIndex = 2 * beginHour + beginMinute / 30 ;
    EndIndex = 2 * endHour + endMinute / 30;
    for(int i = BeginIndex; i < EndIndex; i++)
    {
        if (appointed[i] == 1)
        {
            cout << "This time have been booked" << endl;
            exit(1);
        }
    }
    for(int i = BeginIndex; i < EndIndex ; i++)
    {
        appointed[i] = 1;

    }
    cout << "Congratulation! Appointment is Fine" << endl;
}
// Judge the day is or not holiday
bool Date::isHoliday(int month, int day) const
{
    for(int i = 0; i < 4; i++)
    {
        if((month == Holidays[i][0]) && (day == Holidays[i][1]))
        {
            cout << "It is holiday" << endl;
            return true;
        }
    }
    return false;
}
// Judge the day is or not weekend
bool Date::isWeekend(int month, int day) const
{
   for(int i = 0; i < 26; i++)
   {
     if((month == Weekend[i][0]) && (day == Weekend[i][1]) )
      {
        cout <<"It is weekend day" << endl;
        return true;
      }
   }
   return false;
}
bool Date::isValidDay(int month, int day) const
{
    //Check if the input month value is valid
    if (month < 9 || month > 12)
    {
        cout << "The input month is invalid, please input a number between 9 and 12." << endl;
        return false;
    }
    //If the input month value is false the function will return false and exit, otherwise it will contine execute.
    
    //Check if the day input is valid.
    //If month is equal to 9, the valid input should between 7 and 30
    if (month == 9)
    {
        if (day < 7 || day > 30)
        {
            cout << "The input day is invalid, please input a number between 7 and 30." << endl;
            return false;
        }
    }
    //If month is equal to 10, the valid input should between 1 and 31
    if (month == 10)
    {
        if (day < 1 || day > 31)
        {
            cout << "The input day is invalid, please input a number between 1 and 31." << endl;
            return false;
        }
    }
    //If month is equal to 11, the valid input should between 1 and 30
    if (month == 11)
    {
        if (day < 1 || day > 30)
        {
            cout << "The input day is invalid, please input a number between 1 and 30." << endl;
            return false;
        }
    }
    //If month is equal to 12, the valid input should between 1 and 6
    if (month == 12)
    {
        if (day < 1 || day > 6)
        {
            cout << "The input day is invalid, please input a number between 1 and 6." << endl;
            return false;
        }
    }
    return true;
}
void Date::output(ostream &outs) const
{
    //Use isHoliday member function to check if the day is a holiday.
    if (isHoliday(this->month, this->day))
    {
        outs << month << "." << day << "is a holiday, no appoints allowed." << endl;
        exit(1);
    }
    else if (isWeekend(this->month, this->day))  //Use isWeekend function to check if the day is a weenkend.
    {
        outs << month << "." << day << "is a weenkend, no appoints allowed." << endl;
        exit(1);
    }
}

bool equal(const Date &date1 , const Date &date2)
{
    return (date1.day == date2.day && date1.month == date2.month);
}
