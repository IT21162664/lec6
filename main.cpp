#include <iostream>
#include <iomanip>
#include "date.h"
using namespace std;

int main() {
  //creat object of the class
  date d1;
  int md,mm,my;
  cout<<"enter day:";
  cin>>md;
  cout<<"enter month:";
  cin>>mm;
  cout<<"enter year:";
  cin>>my;
  d1.setDay(md);
  d1.setMonth(mm);
  d1.setYear(my);

  cout<<setw(2)<<setfill('0')<<d1.getDay()<<"/"<<setw(2)<<setfill('0')<<d1.getMonth()<<"/"<<setw(4)<<d1.getYear()<<endl;

  return 0;
}