//structure in c++
#include<iostream>
using namespace std;
int main()
{
  typedef struct employee
  {
  int id;
  char favchar;
  float salary;
  }ep;
  ep harry;
  harry.id = 1;
  harry.favchar = 'c';
  harry.salary = 15000000;
  cout <<"Id:"<<harry.id<<endl;
  cout<<"salary:"<<harry.salary<<endl;
  cout<<"favchar:"<<harry.favchar<<endl;
  return 0;
}

