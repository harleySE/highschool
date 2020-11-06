#include <iostream>
#include <string>
using namespace std;

class course{
  public:
  course(string a, string b, string c, string d, string e):coursename(a), instructor(b), roomnumber(c), meetingtimes(d), textbookname(e){
    cout<<coursename<<endl;
    cout<<instructor<<endl;
    cout<<roomnumber<<endl;
    cout<<meetingtimes<<endl;
    cout<<textbookname<<endl;
  }
  private:
  string coursename;
  string instructor;
  string roomnumber;
  string meetingtimes;
  string textbookname;
};

int main() {
  course("Stupid", "Mr. Terrible", "666", "3 AM", "The Art of Kill Me");
  return 0;
}
//I had it output mainly for bug testing
