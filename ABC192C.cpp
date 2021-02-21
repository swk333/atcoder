#include <bits/stdc++.h>
using namespace std;
 


int g1(int x){
  string stringx = to_string(x);
  sort(stringx.begin(), stringx.end(), greater<int>());
  int ans = stoi(stringx);
  return ans;
}

int g2(int x){
  string stringx = to_string(x);
  sort(stringx.begin(), stringx.end());
  int ans = stoi(stringx);
  return ans;
}

int main() {

  int N, K;
  cin >> N >> K;
  int temp = N;
  int ans = N;
 // cout << temp << endl;

  for(int i = 0; i < K; i++){
    ans = g1(temp) - g2(temp);
    temp = ans;
    // cout << ans << endl;
    // cout << temp << endl;
  }

  cout << ans << endl;

}