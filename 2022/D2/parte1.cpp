#include "bits/stdc++.h"

using namespace std;

int main() {
    ifstream in("input.txt");
    string line;
    map<string, int> scores = {
            pair<string, int>("A X", 4),
            pair<string, int>("B X", 1),
            pair<string, int>("C X", 7),
            pair<string, int>("A Y", 8),
            pair<string, int>("B Y", 5),
            pair<string, int>("C Y", 2),
            pair<string, int>("A Z", 3),
            pair<string, int>("B Z", 9),
            pair<string, int>("C Z", 6)
    };
    int sum = 0;
    while (getline(in, line)){
        sum += scores[line];
    }
    cout << sum << endl;
    return 0;
}
