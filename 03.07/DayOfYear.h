#ifndef DAY_OF_YEAR_H
#define DAY_OF_YEAR_H

class DayOfYear {
  public:
      void setDate(int mon, int day);
      int getMonth()const;
      int getDay()const; 
  private:
      int dd;
      int mm;
};

#endif