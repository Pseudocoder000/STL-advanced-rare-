
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (__builtin_popcount(i) % 2 == 1) {
            count++;
        }
    }

    

    cout << count << endl;
    return 0;
}

//🧩 Problem:
//Given a number n, count how many numbers from 1 to n have an odd number of 1s in their binary representation.
