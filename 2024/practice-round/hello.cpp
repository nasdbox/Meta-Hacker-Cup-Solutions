#include <bits/stdc++.h>

using namespace std;

#define ll long long

string solve(ifstream &fin, ofstream &fout) {
  int n, k;
  fin >> n >> k;
  vector<int> A(n);
  for (auto &a : A) fin >> a;
  int mini = *min_element(A.begin(), A.end());
  // for (auto &a : A) cout << a;
  // cout << "\n";
  ll x = mini*max((2ll*n - 3), 1ll);
  if (x > k) return "NO";
  return "YES";
}

int main() {
  ifstream fin("walk_the_line_input.txt");
  ofstream fout("output.txt");
	int t;
	fin >> t;
	for (int i = 1; i <= t; i++){
    fout << "Case #" << i << ": " << solve(fin, fout) << '\n';
    fout << flush;
  }
}
