#include <iostream>
using namespace std;
class first {
   public:
   first(){
      cout << "Anant sir Teacher of CSE department\n ";
   }
};
//container class
class second {
   first f;
   public:
   //constructor
   second(){
      cout << "Anant sir Also Teacher of CSE 2nd Year\n";
   }
};
int main(){
   second s;
   return 0;
}