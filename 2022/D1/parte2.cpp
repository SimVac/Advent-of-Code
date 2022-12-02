#include "bits/stdc++.h"

using namespace std;

int main() {
    ifstream in("input.txt");
    string line;
    int sum = 0;
    vector<int> sums;
    while (getline(in, line)){
        if (line.empty()){
            sums.push_back(sum);
            sum = 0;
        }else sum += stoi(line);
    }
    sums.push_back(sum);
    sort(sums.begin(), sums.end(), greater<>());
    cout << sums[0] + sums[1] + sums[2] << endl;
    return 0;
}
