#include "date.h"

void date::setDay(int d)
{
  day=d;
}
void date::setMonth(int m)
{
  month=m;
}
void date::setYear(int y)
{
  year=y;
}
int date::getDay()
{
  return day;
}
int date::getMonth()
{
  return month;
}
int date::getYear()
{
  return year;
}