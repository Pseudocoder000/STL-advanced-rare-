#include<bits/stdc++.h>
using namespace std;
void explainsort(){
    vector<int> v = {5, 2, 9, 1, 5, 6};
    sort(v.begin(), v.end());
    for(int i : v) {
        cout << i << " ";
    }
}
void descending (){
    vector<int> v = {5, 2, 9, 1, 5, 6};
    sort(v.begin(), v.end(), greater<int>());
    for(int i : v) {
        cout << i << " ";
    }
}


int main() {
   explainsort();
    cout << endl;
    descending();
    cout << endl;
    return 0;
}