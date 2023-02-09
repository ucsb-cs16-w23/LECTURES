#include <iostream>
#include <vector>
using namespace std;

// pass by value
int timesTwo(int x) {
  x = x * 2;
  cout << "Inside timesTwo, x=" << x << endl;
  return x;
}

// pass by reference
// creates an ALIAS
// on next line, the & means pass by reference (MAKE AN ALIAS)
void doubleIt(int &a) {  // & here is TOTALLY DIFFERENT FROM ONE BELOW
  a = a * 2;
}

// pass by pointer
void makeItDouble(int *x) {
  // the prefix * here means "dereference", i.e. follow the pointer
  (*x) = (*x) * 2;
}

int main() {
  int x; 
  cout << "Please enter x: ";
  cin >> x;

  int y = timesTwo(x);
  cout << "y=" << y << endl;
  cout << "in main x=" << x << endl;

  doubleIt(x);
  cout << "in main x=" << x << endl;

  // THE & MEANS ADDRESS OF!!!  It does not mean pass by reference.
  makeItDouble(&x); // & here is TOTALLY DIFFERENT FROM & up above
  cout << "in main x=" << x << endl;

  return 0;
}
