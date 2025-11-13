#include <bits/stdc++.h>

using namespace std;

#define ll long long

double solve(ifstream &fin, ofstream &fout) {
  int n, p;
  fin >> n >> p;
  double res = 100.0 * pow(2.0, (n-1)/(double)n * log2(p/100.0));
  // cout << setprecision(15);
  // cout << res << "\n";
  // printf("%.12f\n", res);
  return res-p;
}

int main() {
  ifstream fin("line_by_line_input.txt");
  ofstream fout("output.txt");
	int t;
	fin >> t;
	for (int i = 1; i <= t; i++){
    fout << setprecision(15);
    fout << "Case #" << i << ": " << solve(fin, fout) << '\n';
    fout << flush;
  }
}
