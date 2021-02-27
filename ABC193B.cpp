#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int> A(N), P(N), X(N);
  for(int i = 0; i < N; i++){
    cin >> A[i] >> P[i] >> X[i];
  }


  int minprice = 1000000001;
  for(int i = 0; i < N; i++){
    if(X[i] > A[i]){
      minprice = min(minprice, P[i]);
      continue;
    }
  }

  if(minprice == 1000000001){
    cout << -1 << endl;
  }
  else{
    cout << minprice << endl;
  }

}

