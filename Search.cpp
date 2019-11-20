
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int v[n];
	for (int i = 0; i < n;i++){
		cin >> v[i];
	}
	int x;
	cin >> x;
	// General method for searching - O(n)
	for (int i = 0; i < n;i++){
		if (v[i] == x){
			cout << i << "\n";
		}
	}
	 // Binary search - O(logn)
	int a = 0; 
	int b = n - 1;
	while (a <= b){
		int middle = (a + b) / 2;
		if (v[middle] == x){
			cout << middle << "\n";
		}
		if (v[middle] > x){
			b = middle - 1;
		}else{
			a = middle + 1;
		}
	}
	
}