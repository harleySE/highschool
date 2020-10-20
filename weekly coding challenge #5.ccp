#include <iostream>
#include <string>
using namespace std;

int main() {
        string arry[] = {"english","math","history","gym","composition","science","physics","chemistry","biology"};
    int words=0;
    for(int i=0; i<9; i++){
      if(arry[i].size()==4){
        words++;
      }
    }
    cout<<words;
	return 0;
	
}
