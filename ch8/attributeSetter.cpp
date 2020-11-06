#include <iostream>
using namespace std;

class person{
  private:
  int speed;
  public:
  void setSpeed(int a){speed=a;}
  int getSpeed(){cout<<speed<<endl; return this->speed;}
};

int main() {
person bob;
bob.setSpeed(17);
bob.getSpeed();
}
