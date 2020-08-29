#include<iostream>
using namespace std;
int main() {
  int n;
  int priority[n];
  cout<<"Choose which process you want to carry out\n";
  cout<<"____________________________________________\n";
  cout<<"\n";
  cout<<"For FIRST COME FIRST OUT                choose     1\n";
  cout<<"For PRIORITY SCHEDULING NON-PREMITIVE   choose     2\n";
  cout<<"For PRIORITY SCHEDULING PREMITIVE       choose     3\n";
  cout<<"For SHORTEST JOB FIRST  NON-PREMITIVE   choose     4\n";
  cout<<"For SHORTEST JOB FIRST  PREMITIVE       choose     5\n";
  cout<<"For ROUND ROBIN                         choose     6\n";
  cout<<"____________________________________________\n";
  cout<<"\n";
  int choice;
  cout<<"enter the your choice          =";
  cin>>choice;
  cout<<"\n";
  cout<<"enter the number of process    =";
  cin>>n;
  cout<<"\n";
  int p[n];int b[n];int a[n];
  for(int i=0;i<n;i++){
    cout<<"\nEnter the Brust time of "<<i+1<<"  process =";
    cin>>b[i];
    if(choice==2){
    cout<<"\nEnter the Priority of "<<i+1<<"  process =";
    cin>>a[i];
    }else{
    cout<<"\nEnter the Arival time of "<<i+1<<"  process =";
    cin>>a[i];
  }
  }

  switch (choice) {
  case 1:
       findavgTimeFirst_Come_First_Serve(p, n, b, a);
	   return 0;
       break;
  case 2:
       priorityScheduling(b,a,n);
       return 0;
       break;
  case 3:

	  return 0;
      break;
  case 4:
      Shortest_Job_First_non(p,a,b,n);
      return 0;
      break;
  case 5:
      Shortest_Job_First_pri(p,b,a,n);
      return 0;
      break;
  case 6:
     findavgTimeround_robin(p, n, b);
	 return 0;
     break;
  }
  return 0;
}
