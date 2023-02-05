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
// void printcounting(int n) {

//   for (int i = 0; i < n; i++) {
//     cout << i << endl;
//   }
//   cout << endl;
// }

// int main() {
//   int n;
//   cout << "enter the value" << endl;
//   cin >> n;
//   printcounting(n);
// }


// <-------STUDENTS-AND GRADE--------->
// char mymarks(int marks){
//   if(marks>90)
//     return 'A';
  
//     else if(marks>80)
//       return 'B';
    
//   else if(marks>60)
//     return 'C';
  
//   else if(marks>45)
//     return 'C';
  
//   else
//     return 'E';
  
// }
// int main(){
//   int marks;
//   cout<<"enter the marks"<<endl;
//   cin>>marks;
//   char ans = mymarks(marks);
//   cout<<ans<<endl;
// }


//  // <-------sum of n numbers--------->
// int getsum(int n){
//   int sum = 0;
//   for(int i=1; i<=n; i++){
//     sum = sum+i;
//   }
//  return sum;
// }

// int main(){
//    int n;
//   cout<<"enetr the value"<<endl;
//   cin>>n;
//   int ans = getsum(n);
//   cout<<"the addition of n numbers"<<" "<<"is"<<" "<<ans<<endl;
// }


 // <------- EVEN sum of n numbers--------->
int getsum(int n){
  int sum = 0;
  for(int i=1; i<=n; i=i+2){
    sum = sum+i;
  }
 return sum;
}

int main(){
   int n;
  cout<<"enetr the value"<<endl;
  cin>>n;
  int ans = getsum(n);
  cout<<"the addition of n numbers"<<" "<<"is"<<" "<<ans<<endl;
}
