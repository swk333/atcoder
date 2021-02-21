#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iterator>
#include <math.h>


using namespace std;


int angleB(vector<int> a,vector<int> b,vector<int> c){
    //ここから書きましょう
    int bc = sqrt(pow(c[0] - b[0], 2) + pow(c[1] - b[1], 2));
    int ca = sqrt(pow(a[0] - c[0], 2) + pow(a[1] - c[1], 2));
    cout << bc << endl;
    cout << ca << endl;
    int sin = ca / bc;
    cout << sin << endl;
    int ans = asin(sin) * 180 / 3.141592;
    cout << ans << endl;
    return ans;
}

int main() {
    return 0;
}