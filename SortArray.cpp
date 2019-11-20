#include <bits/stdc++.h>
using namespace std;
 


int main(){
	int n;
	cin >> n;
	int v[n];
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}

	// Increasing order
	sort(v.begin(). v.end());
	cout << v << "\n";
	// Reverse order
	// sort(v.rbegin(), v.rend());
	// cout << v << "\n";

}