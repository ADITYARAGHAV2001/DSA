// #include<iostream>

// using namespace std;
// int main(){
//  int a,b;
//  char op;
//  cout<<"enter the number one"<<endl;
//  cin>>a;
//  cout<<"enter the second number"<<endl;
//  cin>>b;
// cout<<"enter the operation"<<endl;
//  cin>>op;
//  switch(op){
//      case '+':
//          cout<<a+b<<endl;
//          break;
//      case '-':
//          cout<<a-b<<endl;
//          break;
//      case '*':
//          cout<<a*b<<endl;
//          break;
//      case '/':
//          cout<<a/b<<endl;
//          break;
//      case '%':
//          cout<<a%b<<endl;
//          break;
//      }
// return 0;
// }
// functions
// #include<iostream>
// using namespace std;
// int pow(int a, int b){
//     int ans =1;
//     for ( int i = 1; i<=b ; i++){
//          ans = ans*a;
//     }
//     cout<<ans;
// }
// int main(){
// pow(3,2);
// cout<<endl;
// pow(9,2);
// return 0;
// }
#include<iostream>
using namespace std;
int factorial(num){
int cum = num;
for(int i = num-1; i>=1 ; i--){
 cum = cum*i;
}
cout<<cum;
}
int main(){
int num;
cout<<"enter the number"<<endl;
cin>>num;
fsct

return 0;
}