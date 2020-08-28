#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Choose which process you want to carry out\n";
  cout<<"____________________________________________\n";
  cout<<"\n";
  cout<<"For FIRST COME FIRST OUT   choose     1\n";
  cout<<"For PRIORITY SCHEDULING    choose     2\n";
  cout<<"For SHORTEST JOB FIRST     choose     3\n";
  cout<<"For ROUND ROBIN            choose     4\n";
  cout<<"____________________________________________\n";
  cout<<"\n";
  int choice;
  cout<<"enter the your choice          =";
  cin>>choice;
  cout<<"\n";
  cout<<"enter the number of process    =";
  cin>>n;
  cout<<"\n";


  switch (choice) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
   break;
  case 7:
    cout << "Sunday";
    break;
  }
  return 0;
}
