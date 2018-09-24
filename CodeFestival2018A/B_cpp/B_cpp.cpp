#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define var auto
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define rep(i, n) for(int i = 0; i < n; i++) 
#define inp(a) int a; cin >> a;
#define inps(s) std::string s; cin >> s;
#define out(a) cout<<a<<endl;

int main()
{
	int N, M, A, B;
	cin >> N >> M >> A >> B;
	if (A > B) B = A;

	vector<int> L, R;
	rep(i, M)
	{
		int templ, tempr;
		cin >> templ >> tempr;
		L.push_back(templ);
		R.push_back(tempr);
	}

	var mikan = 0;
	rep(i, N)
	{
		var flag = false;
		for (var j = 0; j < M; j++)
		{
			if(L[j] - 1 <= i && R[j] > i)
			{
				flag = true;
				break;
			}
		}
		
		mikan += flag ? A : B;
	}
	cout << mikan;
}