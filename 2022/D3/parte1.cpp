#include "bits/stdc++.h"

using namespace std;

int convert(char c){
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 1;
    return c - 'A' + 27;
}

int main() {
    ifstream in("input.txt");
    string line;
    int sum = 0;
    while (in >> line){
        bool flag = false;
        for (int i = 0; i < line.size()/2; ++i) {
            for (int j = line.size()/2; j < line.size(); ++j) {
                if (line[i] == line[j]){
                    sum += convert(line[i]);
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
    }
    cout << sum << endl;
    return 0;
}
