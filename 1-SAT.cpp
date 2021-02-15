#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for(int i = 0; i < N; i++){
    cin >> S[i];
  }

  set<string> T;
  for(int i = 0; i < N; i++){
    T.insert(S[i]);
  }

  for(int i = 0; i < N; i++){
    string x = "!" + S[i];
    if(T.count(x)){
      cout << S[i] << endl;
      return 0;
    }

  }

  cout << "satisfiable" << endl;
  
}

