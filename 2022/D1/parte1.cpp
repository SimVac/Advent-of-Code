#include "bits/stdc++.h"

using namespace std;

int main() {
    ifstream in("input.txt");
    string line;
    int sum = 0;
    int max = 0;
    while (getline(in, line)){
        if (line.empty()){
            max = std::max(max, sum);
            sum = 0;
        }else sum += stoi(line);
    }
    max = std::max(max, sum);
    cout << max << endl;
    return 0;
}
