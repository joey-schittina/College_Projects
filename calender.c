#include <stdio.h>
#include "calendar.h"

int numDaysInMonth(int month, int year){
  /*
    
   */
  switch(month){
  case JAN:
    return 31;
    break;
  case FEB:
    if (year%400==0){
        return 29;
    }
    if (year%100!=0){
        if (year%4==0){
            return 29;
        }
    }
    return 28;
    break;
  case MAR:
    return 31;
    break;
  case APR:
    return 30;
    break;
  case MAY:
    return 31;
    break;
  case JUN:
    return 30;
    break;
  case JUL:
    return 31;
    break;
  case AUG:
    return 31;
    break;
  case SEP:
    return 30;
    break;
  case OCT:
    return 31;
    break;
  case NOV:
    return 30;
    break;
  case DEC:
    return 31;
    break;
  default:
    return -1;
  }
}

int numFirstSundays(int startYear, int endYear, int janFirstWeekday){
    int month;
    int count=0;
    int weekday=janFirstWeekday;
    for (startYear;startYear<=endYear;startYear++){
        month=JAN;
        for (month=JAN;month<=DEC;month++){
            if (weekday%7==0){
                count++;
            }
            weekday=(weekday + numDaysInMonth(month,startYear))%7;
        }
    }
  return count;
}

