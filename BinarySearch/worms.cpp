#include <bits/stdc++.h>
using namespace std;
 
int nworms[112345];
int jworms[112345];
 
int main(){
	int n, m, worm;
	cin >> n;
	int sum = 0;
	for(int i = 0;i < n; i++){
		cin >> worm;
		sum += worm;
		nworms[i] = sum;
	}
	cin >> m;
	for(int j = 0;j < m;j++){
		cin >> jworms[j];
	}
	for(int z = 0; z < m;z++){
		int iter = lower_bound(nworms, nworms+n, jworms[z]) - nworms + 1;
		cout << iter << "\n";
	}
}