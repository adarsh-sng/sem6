//17 July 2025

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(int n, bool print_output = false) 
{   
    // Create and fill matrix with random values
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            v[i][j] = rand() % 100;  // Random values 0-99
        }
    }
    
    auto start = chrono::high_resolution_clock::now();
    
    // Original code operation: printing all elements
    if (print_output) {
        for (int i = 0; i < n; i++) {   
            for (int j = 0; j < n; j++) {
                cout << v[i][j] << " ";
            }
        }
    } else {
        // Just access all elements without printing
        for (int i = 0; i < n; i++) {   
            for (int j = 0; j < n; j++) {
                if(i==j){
                    int temp = v[i][j];
                }
            }
        }
    }
    
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> full_matrix_time = end - start;
    start = chrono::high_resolution_clock::now(); 
    // Original code operation: printing diagonal elements
    if (print_output) {
        for (int i = 0; i < n; i++) {
            cout << v[i][i] << " ";
        }
        cout << endl;
    } else {
        // Just access diagonal elements without printing
        for (int i = 0; i < n; i++) {

            int temp = v[i][i];
        }
    }
    end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> diagonal_time = end - start;
    
    cout << "Size n = " << n << ":" << endl;
    cout << "Full matrix operation time: " << full_matrix_time.count() << " ms" << endl;
    cout << "Diagonal operation time: " << diagonal_time.count() << " ms" << endl;
    cout << "-------------------------" << endl;
}

signed main() {
    fast
    srand(time(0));
    
    vector<int> sizes = {10, 100, 1000, 10000,10000};
    
    for (int size : sizes) {
        solve(size);
    }
    
    return 0;
}