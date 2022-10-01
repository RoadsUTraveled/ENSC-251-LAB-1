//
//  TimeRange.cpp
//  ENSC 251 LAB 1
//
//  Created by Luo LanQing on 2022/9/30.
//

#include <iostream>
#include <iomanip>
#include "TimeRange.hpp"
using namespace::std;

TimeRange::TimeRange()
{}
TimeRange::TimeRange (const int &newbeginHour,const int &newbeginMinute,const int &newendHour,const int &newendMinute)
{
    this->beginHour = newbeginHour;
    this->beginMinute = newbeginMinute;
    this->endHour = newendHour;
    this->endMinute = newendMinute;
}
void TimeRange::setbeginHour(const int &newbeginHour)
{
    this->beginHour = newbeginHour;
}
void TimeRange::setbeginMinute(const int &newbeginMinute)
{
    this->beginMinute = newbeginMinute;
}
void TimeRange::setendHour(const int &newendHour)
{
    this->endHour = newendHour;
}
void TimeRange::setendMinute(const int &newendMinute)
{
    this->endMinute = newendMinute;
}
int TimeRange::getbeginHour() const
{
    return beginHour;
}
int TimeRange::getbeginMinute() const
{
    return beginMinute;
}
int TimeRange::getendHour() const
{
    return endHour;
}
int TimeRange::getendMinute() const
{
    return endMinute;
}
// To out put information of hour and time
void TimeRange::output(ostream &outs) const
{
    outs << "Check in of appoinment is" << setw(2) << beginHour <<":" << setw(2) << beginMinute << endl;
    outs << "Check out of appoinment is" << setw(2) << endHour <<":" << setw(2) << endMinute << endl;
}
// Check the appointment day is the same day
bool TimeRange::isValidTime(const int &newbeginHour, const int &newbeginMinute, const int &newendHour, const int newendMinute) const
{
    if((newbeginHour < 0) || (newbeginHour > 23) || (newendHour < 0) || (newendHour > 23) || (newendHour < newbeginHour))
    {
      cout << "Illegal Hour input. Aborting Problem" << endl;
      exit(1);
    }
    if(!((newbeginMinute == 0) || (newbeginMinute == 30) || (newendMinute == 0) || (newendMinute == 30)))
    {
     cout << "Illegal Minute input. The number of minuts must be 0 or 30" << endl;
     exit(1);
    }
    if((newbeginHour == newendHour) && (newbeginMinute == 30) && (newendMinute == 0))
    {
     cout << "The appoinment time order is wrong" << endl;
     exit(1);
    }
    return true;
    
}
