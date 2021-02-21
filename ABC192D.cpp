#include <bits/stdc++.h>
using namespace std;
 
int convert(int x, int n){
    int y=0, i=0, z;
    while(x > 0){
        z = x%n;
        y += z*pow(10, i);
        x = x/n;
        i++;
    }
    return y;
}




int main() {
  string X;
  cin >> X;
  int M;
  cin >> M;
  int maxNum = 0;
  int d = stoi(X);
  while(d > 0){
    maxNum = max(d % 10, maxNum);
    d = d / 10;
  }

  int numX = stoi(X);
  int ans = convert(numX, maxNum + 1);
  cout << ans << endl;



}