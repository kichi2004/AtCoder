#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>

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

int main()
{
	string s, t;
	cin >> s >> t;
	//scanf("%s%s", s, t);
	map<char, char> list;
	set<char> ss;

	for (var i = 0; i < s.size(); i++)
	{
		var a = s[i], b = t[i];
		if (list.count(a)) a = list[a];
		if (a != b)
		{
			list[a] = b;
			ss.insert(b);
		}
	}

	set<char> set;
	for(var x : list)
	{
		if (set.count(x.first)) { set.erase(x.first); continue; }
		set.insert(x.second);
		for(int i = 0; i < s.size(); i++)
		{
			if (s[i] == x.first) s[i] = x.second;
			else if (s[i] == x.second) s[i] = x.first;
		}
	}

	cout << s << "\n" << t << "\n" << (s == t ? "Yes" : "No");
}