#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  for(int i = 0; i < N; i++){
    cin >> A[i] >> B[i];
  }
  vector<int> C;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(i == j){
        continue;
      }
      int temp = max(A[i], B[j]);
      C.push_back(temp);
    }
  }
  int minimum = 1000000;
  for(int i = 0; i < C.size(); i++){
    minimum = min(C[i], minimum);
  }


  int alone = 1000000;
  for(int i = 0; i < N; i++){
    alone = min(A[i] + B[i], alone);
  }

  int ans = min(alone, minimum);
  cout << ans << endl;



}

