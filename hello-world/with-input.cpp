#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "Name: ";
  cin >> name;

  cout << "Hello, " << name << endl;
  cout << "How old are you?" << endl;
  cout << "Age: ";
  int age;
  cin >> age;
  cout << "You are " << age << " years old." << endl;

  return 0;
}
