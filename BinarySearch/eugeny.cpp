#include <bits/stdc++.h>
using namespace std;

int const ms = 1e5;
int lista[ms];

int main(){
	int n, m, sum = 0, c, t, momento;
	cin >> n >> m;
	for (int i = 0; i < n;i++){
		cin >> c >> t;
		sum += c * t;
		lista[i] = sum;
	}
	for(int j = 0;j < m;j++){
		cin >> momento;
		int res = lower_bound(lista, lista + n, momento) - lista + 1;
		cout << res << "\n";
	}
}