#include <iostream>
using namespace std;

// <-------ADDITION OF TWO NUMBERS------>
// int getadd(int x, int y) {
//   int result = x + y;
//   return result;
// }

// int main() {

//   int a, b;
//   cout << "entr the numbers" << endl;
//   cin >> a >> b;

//   int sum = getadd(a, b);
//   cout << "the addition"
//        << " "
//        << "is"
//        << " " << sum << endl;
// }

// <-------FIND THE MAXIMUM OF THREE NUMBERS---------->

// int maxitem(int a, int b, int c) {
//   if (a > b && a > c)
//     return a;

//   else if (b > a && b > c)
//     return b;

//   else
//     return c;
// }
// int main() {
//   int a, b, c;
//   cout << "enter the numbers" << endl;
//   cin >> a >> b >> c;
//   int ans = maxitem(a, b, c);
//   cout << "the maximum number"
//        << " "
//        << "is"
//        << " " << ans << endl;
// }

//  <-------COUNTING FROM 1 TO N---------->
void printcounting(int n) {

  for (int i = 0; i < n; i++) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cout << "enter the value" << endl;
  cin >> n;
  printcounting(n);
}