#include <iostream>
#include <string>
#include <vector>
#include <sstream>

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
	int N, M, X, Y;
	vector<int> x, y;
	cin >> N >> M >> X >> Y;

	int tmp;
	rep(i, N)
	{
		cin >> tmp;
		x.add(tmp);
	}
	rep(i, M)
	{
		cin >> tmp;
		y.add(tmp);
	}

	//var flag = false;

	for (var Z = X + 1; Z <= Y; Z++)
	{
		var f = true;
		rep(i, N)
		{
			//x < Z
			if(x[i] >= Z)
			{
				f = false;
				break;
			}
		}
		if(!f)
		{
			continue;
		}

		f = true;
		rep(i, M)
		{
			//Y >= Z
			if(y[i] < Z)
			{
				f = false;
				break;
			}
		}
		if(f)
		{
			cout << "No War";
			return 0;
		}
	}
	cout << "War";

	return 0;
}