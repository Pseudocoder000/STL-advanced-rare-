#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    sort(v.begin(), v.end(), greater<int>());  // sort in descending order

    do {
        for (int i : v) cout << i << " ";
        cout << endl;
    } while (prev_permutation(v.begin(), v.end()));

    return 0;
}
