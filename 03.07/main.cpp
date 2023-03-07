#include <iostream>
#include "DayOfYear.h"
using namespace std;

int main() {
  DayOfYear today;
  // today.setDate(1, 9);
  cout<< "Today’s date is: ";
  cout<< today.getMonth() << "/" << today.getDay(); 
  return 0;
}