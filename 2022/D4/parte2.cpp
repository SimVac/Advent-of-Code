//File di input modificato, sostituendo i simboli , e - con spazi
#include "bits/stdc++.h"

using namespace std;

struct Range{
    int start, end;
};

int main() {
    ifstream in("input.txt");
    Range r1, r2;
    int sum = 0;
    while (in >> r1.start >> r1.end >> r2.start >> r2.end){
        if (r1.start >= r2.start && r1.start <= r2.end) sum++;
        else if (r1.end >= r2.start && r1.end <= r2.end) sum++;
        else if (r2.start >= r1.start && r2.start <= r1.end) sum++;
        else if (r2.end >= r1.start && r2.end <= r1.end) sum++;
    }
    cout << sum << endl;
    return 0;
}
