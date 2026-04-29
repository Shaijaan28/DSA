#include <bits/stdc++.h>
using namespace std;

// Custom hash (optional but useful in CP)
struct custom_hash {
    size_t operator()(long long x) const {
        return x ^ (x >> 16);
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Hashing using unordered_map
    unordered_map<int, int, custom_hash> freq;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    
    cout << "\nElement Frequencies:\n";
    for(auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}