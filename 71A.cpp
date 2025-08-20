#include <bits/stdc++.h>
using namespace std;

void solve(string n){
    if(n.length() <= 10){
        cout << n << endl;
        return;
    }

  string s;
  int wordCount = 0;
  for(int i = 0 ; i< n.length();i++){
    wordCount++;
  }
  s = n[0];
  s += to_string(wordCount - 2);
  s += n[n.length() - 1];
  cout << s << endl;
}

int main(){
    int n;
    cin >> n;
    string s;

    for(int i = 0 ; i< n;i++){
        cin >> s;
        solve(s);

    }

}
