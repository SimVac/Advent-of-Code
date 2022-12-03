#include "bits/stdc++.h"

using namespace std;

int convert(char c){
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 1;
    return c - 'A' + 27;
}

int main() {
    ifstream in("input.txt");
    vector<string> line(3);
    int sum = 0;
    while (in >> line[0] >> line[1] >> line[2]){
        bool flag = false;
        for (int i = 0; i < line[0].size(); ++i) {
            for (int j = 0; j < line[1].size(); ++j) {
                if (line[0].at(i) == line[1].at(j)){
                    for (int k = 0; k < line[2].size(); ++k) {
                        if (line[0].at(i) == line[2].at(k)){
                            sum += convert(line[0].at(i));
                            flag = true;
                            break;
                        }
                    }
                }
                if (flag) break;
            }
            if (flag)break;
        }
    }
    cout << sum << endl;
    return 0;
}
