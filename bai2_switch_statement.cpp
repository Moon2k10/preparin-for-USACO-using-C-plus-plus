#include <iostream>
using namespace std;
//---Bài 2: Switch - Coffee---
int main() {
  int choice = 1;
switch (choice) {
case 1:
  cout << "You ordered Coffee";
  break;
  
case 2:
  cout << "You ordered Tea";
  break;
  
default:
  cout << "Invalid choice";
}
  return 0;
}
