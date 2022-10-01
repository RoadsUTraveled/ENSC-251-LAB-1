//
//  TimeRange.hpp
//  ENSC 251 LAB 1
//
//  Created by Luo LanQing on 2022/9/30.
//

#ifndef TimeRange_hpp
#define TimeRange_hpp

#include <stdio.h>
#include <iostream>
using namespace::std;

class TimeRange{
private:
    int beginHour;
    int beginMinute;
    int endHour;
    int endMinute;
public:
    //Constructors
    TimeRange();
    TimeRange (const int &newbeginHour,const int &newbeginMinute,const int &newendHour,const int &newendMinute);
    //Setters
    void setbeginHour(const int &newbeginHour);
    void setbeginMinute(const int &newbeginMinute);
    void setendHour(const int &newendHour);
    void setendMinute(const int &newendMinute);
    //Getters
    int getbeginHour() const;
    int getbeginMinute() const;
    int getendHour() const;
    int getendMinute()const;
    //Additional member functions
    void output(ostream& outs) const;
    bool isValidTime(const int &newbeginHour,const int &newbeginMinute,const int &newendHour,const int newendMinute) const;
};

#endif /* TimeRange_hpp */
