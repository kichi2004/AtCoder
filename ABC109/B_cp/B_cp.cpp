#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

#define var auto
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define rep(i, n) for(int i = 0; i < n; i++) 
#define inp(a) int a; cin >> a;
#define inps(s) std::string s; cin >> s;
#define out(a) cout<<(a)<<endl;

int main() {
	inp(N);
	set<string> W(N);
	rep(i, N)
	{
		inps(tmp);
		W.insert(tmp);
	}

	if(W.size() != N)
	{
		cout << "No";
		return 0;
	}

	char last;
	for (auto cs : W)
	{
		
	}
}