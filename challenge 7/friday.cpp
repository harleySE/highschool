#include <iostream>
#include <string>
using namespace std;

string isFriday(string day){
  if(day=="Friday" || day=="friday"){
    cout<<"Yes, it's Friday!:)"<<endl;
  }
  else if(day == "Saturday" || day =="saturday"){
    cout<<"It's not Friday :(."<<endl;
  }
  else if(day == "Sunday" || day =="sunday"){
    cout<<"It's not Friday :(."<<endl;
  }
  else if(day == "Monday" || day =="monday"){
    cout<<"It's not Friday :(."<<endl;
  }
  else if(day == "Tuesday" || day =="tuesday"){
    cout<<"It's not Friday :(."<<endl;
  }
  else if(day == "Wednesday" || day =="wednesday"){
    cout<<"It's not Friday :(."<<endl;
  }
  else if(day == "Thursday" || day =="thursday"){
    cout<<"It's not Friday :(."<<endl;
  }
  else{
    cout<<"Thats not even a day of the week!>:("<<endl;
  }
  return 0;
}

int main() {
 string day="";
 cin>>day;
 isFriday(day); 
}
