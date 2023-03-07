#include "DayOfYear.h"

void DayOfYear::setDate(int mon, int day){
     mm = mon;
     dd = day;
}
int DayOfYear::getMonth() const{
     return mm; 
}
int DayOfYear::getDay() const{
     return dd; 
}
