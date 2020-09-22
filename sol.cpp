#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int a[26];
		for(int i=0; i<26; ++i)
			cin >> a[i];
		string s;
		cin >> s;
		char arr[1000];
		int cnt=0;
		sort(s.begin(), s.end());
		for(int i=0; i<(int)s.size(); ++i)
			if(s[i]!=s[i+1]) {
				arr[cnt]=s[i];
				cnt++;
			}
		string ap="abcdefghijklmnopqrstuvwxyz";
		bool p[26];
		memset(p, 1, sizeof(p));
		int cnt2=0;
		for(int i=0; i<(int)ap.size(); ++i) {
			if(ap[i]!=arr[cnt2]) 
				p[i]=0;
			else
				cnt2++;
		}
		int sum=0;
		for(int i=0; i<26; ++i)
			if(!p[i])
				sum+=a[i];
		cout << sum << "\n";
	}
}
