#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a > b;
} 


int main(){
	int n;
	cin >> n;
	int v[n];
	for (int i = 0;i < n;i++){
		cin >> v[i];
	}
	// Increasing order
	sort(v, v + n);
	for (int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	cout << "\n";
	// Reverse order
	sort(v, v + n, cmp);
	for (int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	cout << "\n";
}