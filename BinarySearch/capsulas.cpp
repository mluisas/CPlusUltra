#include <bits/stdc++.h>
using namespace std;

const int maxv = 1e5;
int v[maxv + 10];

int verify(int dias, int v[], int n){
	int sum = 0;
	for (int i = 0;i < n;i++){
		sum += dias/v[i];
	}
	return sum;
}

int main(){
	int n, f, resultado;
	cin >> n >> f;
	for (int i =0;i < n;i++){
		cin >> v[i];
	}
	int a = 1, b = 1e8;
	while(a <= b){
		int middle = (a + b) / 2;
		if (verify(middle, v, n) >= f){
			resultado = middle;
			b = middle - 1;
		}
		else{
			a = middle + 1;
		}
	}
	cout << resultado << "\n";
}