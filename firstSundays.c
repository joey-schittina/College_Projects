#include "calendar.h"
#include <stdio.h>

int main(){
  int startYear, weekDay, endYear;
  printf("Enter start year: ");
  scanf("%d", &startYear);
  printf("Enter day of January 1st in that year (0 = sunday, 1 = Monday, ..., 6 = saturday): ");
  scanf("%d", &weekDay);
  printf("Enter end year: ");
  scanf("%d", &endYear);

  int numSundays = numFirstSundays(startYear, endYear, weekDay);
  printf("Number of sundays: %d\n", numSundays);
    
}

