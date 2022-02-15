#include <iostream>
using namespace std;

int main() {
  int i, n, t1=0,tlast=1,fn;
  cin >> n;
  cout << "-----------------------"<<"\n";
  cout << t1 <<" \n" << tlast <<"\n";
  for (i = 1; i < n; ++i){
  fn = tlast + t1;
  cout << fn<<"\n";
  t1 = tlast;
  tlast = fn;
  }
    return 0;
}