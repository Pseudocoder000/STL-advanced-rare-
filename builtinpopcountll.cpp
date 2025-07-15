#include <iostream>
using namespace std;

int main() {
    long long num = 1000000000000LL; // 1 trillion

    int count = __builtin_popcountll(num);

    cout << "Number of 1s in binary of " << num << " is: " << count << endl;

    return 0;
}


//🧩 Problem:
//Given a number n, print all numbers from 1 to n that have exactly two 1s in their binary representation.