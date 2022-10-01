#include <iostream>
#include <iomanip>
#include "Date.hpp"
#include "TimeRange.hpp"
using namespace std;

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
