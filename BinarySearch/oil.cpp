#include <bits/stdc++.h>
using namespace std;

bool verify(int v,int n, int k){
	int sum = 0, step;
	for(int i = 0;i < v + 1;i++){
		step = v/pow(k, i);
		if (step == 0){
			return false;
		}		
		sum += step;
		if(sum >= n){
			return true;
		}	
	}
}

int main(){
	int n, k, res, mid;
	cin >> n >> k;
	int a = 0, b = n;
	while(a <= b){
		mid = (a + b)/2;
		if (verify(mid, n, k)){
			res = mid;
			b = mid - 1;
		}
		else{
			a = mid + 1;
		}
	}
	cout << res << "\n";
}