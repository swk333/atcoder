#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
  int i = 0;
  bool ans = true;


  while(i < S.size()){
    if(i == S.size()-1 && i % 2 == 0){
      if(islower(S[i])){
        break;
      }
    }
    if(islower(S[i]) && isupper(S[i+1])){      
      i += 2;
    }
    else{
      ans = false;
      break;
    }
  }

  if(ans){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
}

}

