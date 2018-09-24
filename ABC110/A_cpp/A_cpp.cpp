#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

#define var auto
#define ll long long
#define FOR(i, a, b) for(int (i) = (a); (i) < (b); (i)++)
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++) 
#define inp(a) int a; cin >> a;
#define inps(s) std::string s; cin >> s;
#define out(a) cout<<a<<endl;
#define add(a) push_back((a))

ll conv(const string num) { stringstream ss; ss << num << flush; ll n; ss >> n; return n; }
string conv(const ll n) { stringstream ss; ss << n << flush; return ss.str(); }

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	vector<int> n;
	n.add(a * 10 + b + c);
	n.add(a + b * 10 + c);
	n.add(a + b + c * 10);
	
	cout << *max_element(n.begin(), n.end());

	return 0;
}