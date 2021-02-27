#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  cin >> A >> B;
  double sales = A - B;
  double ans;
  ans = sales / A;
  ans = ans * 100;

  cout << fixed << setprecision(15) << ans << endl;

}

