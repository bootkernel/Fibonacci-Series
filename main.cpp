#include <iostream>

using namespace std;

int main() {
   long long n = 60;
   long first_number = 0, second_number = 1, third_number;
   for(int a = 0; a < n - 1; a++) {
      if(a == 0) {
         cout << first_number << " " << endl;
         cout << second_number << " " << endl;
}
      else {
         third_number = first_number + second_number;
         first_number = second_number;
         second_number = third_number;
         cout << third_number << " " << endl;
      }
   }
}
