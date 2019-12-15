#include <bits/stdc++.h>
using namespace std;

long long rooms[(int) 2e5 + 50];
long long letters[(int) 2e5 + 50];

int main(){
	int n, m;
	long long sum = 0;
	long long room;
	cin >> n >> m;
	rooms[0] = 0;
	for(int i = 1; i < n + 1; i++){
		cin >> room;
		sum += room;
		rooms[i] = sum;
	}
	for(int j = 0; j < m;j++){
		cin >> letters[j];
	}
	for(int z = 0;z < m;z++){
		int corredor = lower_bound(rooms, rooms + n, letters[z]) - rooms;
		cout << corredor << " " << (letters[z] - rooms[corredor - 1]) << "\n";
	}
}