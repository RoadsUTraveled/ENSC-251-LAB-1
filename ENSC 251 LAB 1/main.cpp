#include <iostream>
#include <iomanip>
using namespace std;

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



int main()
{
    Date planner;
    TimeRange appointedTime;
    bool flagOfDay,flagOfWeekend,flagOfHoliday, flag;
    int appointmentEndMonth, appointmentEndDay, NHour, Nminute;
    int appointmentBeginMonth, appointmentBeginDay,startHour, startMinute;
    cout << "Enter your BeginMonth Number of your Appoinmet " << endl;
    cin >> appointmentBeginMonth;
    cout << "Enter your BeginDay  Number of your Appoinmet" << endl;
    cin >> appointmentBeginDay;
    cout << "Enter your End Month Number of your Appoinmet " << endl;
    cin >> appointmentEndMonth;
    cout << "Enter your End Day  Number of your Appoinmet" << endl;
    cin >> appointmentEndDay;
    cout << "Enter your Start time of Hour" << endl;
    cin >> startHour;
    cout << "Enter your Start time of Minute" << endl;
    cin >> startMinute;
    cout << "Enter your End time of Hour " << endl;
    cin >> NHour;
    cout << "Enter your End time of Minute" << endl;
    cin >> Nminute;
    if ((appointmentBeginMonth != appointmentEndMonth)  || (appointmentBeginDay != appointmentEndDay)) //Test the appointment is valid or not
    {
        cout <<"Have to input the same day" << endl;
    }
    else
    {
      planner = Date(appointmentEndMonth, appointmentEndDay);
      flagOfDay = planner.isValidDay(appointmentEndMonth, appointmentEndDay);
      flagOfWeekend = planner.isWeekend(appointmentEndMonth, appointmentEndDay);
      flagOfHoliday = planner.isHoliday(appointmentEndMonth, appointmentEndDay);
      if((flagOfDay == true) && (flagOfWeekend == false) && (flagOfHoliday == false))
     {
        flag = appointedTime.isValidTime(startHour, startMinute, NHour, Nminute);
        if(flag == false)
        {
            cout<<"Appointment time is not consistent with requirment"<< endl;
            exit(1);
        }
        else
        {

            planner.setMonth(appointmentEndMonth);
            planner.setDay(appointmentEndDay);
            planner.setAppointed(startHour, startMinute,NHour,Nminute);
        }
     planner.printFreeTimeSlots();
      planner.printAppointedTimeSlots();
     }
    }

    return 0;
}
