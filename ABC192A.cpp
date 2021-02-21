#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int X;
  cin >> X;
  int a = 100 - X % 100;
  if(a == 0){
      cout << 100 << endl;
      return 0; 
  }
  cout << a << endl;
}

