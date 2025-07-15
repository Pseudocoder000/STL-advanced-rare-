//take a pair array and sort it according to the 2nd element of the pair
// if 2nd one is same then sort then sort it  according to the 1st element but in descending order


#include<bits/stdc++.h>

using namespace std;

// Comparator function
bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first > b.first; // Descending order of first if second is same
    }
    return a.second < b.second; // Ascending order of second
}

int main() {
    vector<pair<int, int>> v = {{5, 2}, {9, 1}, {5, 6}, {2, 6}};

    sort(v.begin(), v.end(), comp);

    for (auto &p : v) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }

    return 0;
}
