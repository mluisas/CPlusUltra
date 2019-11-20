#include <bits/stdc++.h>

using namespace std;

// Algorithm 1 [O(n^3)]
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> x{-1, 2, 4, -3, 5, 2};
    int n = x.size();
    int p = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int s = 0;
            for (int k = i; k <= j; k++){
                s += x[k];
            }
        p = max(p, s);
        }
    }
    cout << p << "\n";
}

// Algorithm 2 [O(n^2)]
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> x{-1, 2, 4, -3, 5, 2};
    int n = x.size();
    int p = 0;
    for (int i = 0; i < n; i++){
        int s = 0;
        for (int j = i; j < n; j++){
            s += x[j];
            p = max(p, s);
        }
    }
    cout << p << "\n";
}

// Algorithm 3 - Kadene's Algorithm [O(n)]
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> x{-1, 2, 4, -3, 5, 2};
    int n = x.size();
    int p = 0, s = 0;
    for (int i = 0; i < n; i++){
        s = max(x[i], s+x[i]);
        p = max(p, s);
    }
    cout << p << "\n";
}


