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

int main() {
	int A, B, C, S;
	cin >> A >> B >> C >> S;
	int sum = A + B + C;
	if (sum == S || sum + 1 == S || sum + 2 == S || sum + 3 == S)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}