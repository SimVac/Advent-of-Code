//File di input modificato. Sono presenti due file distinti, in cui input.txt contiene per ogni linea 3 numeri, la quantità di crane da spostare e poi da dove a dove
//Per il file cranes.txt contiene per ogni riga la pila corrispondente con solo i caratteri partendo dal "basso"
#include "bits/stdc++.h"

using namespace std;
int main() {
    ifstream in("input.txt");
    ifstream inCranes("cranes.txt");
    vector<stack<char>> cranes;
    string t;
    while (inCranes >> t){
        stack<char> temp;
        for (int i = 0; i < t.size(); ++i)
            temp.push(t.at(i));
        cranes.push_back(temp);
    }
    int n, from, to;
    while (in >> n >> from >> to){
        stack<char> temp;
        for (int i = 0; i < n; ++i) {
            temp.push(cranes[from-1].top());
            cranes[from-1].pop();
        }
        for (int i = 0; i < n; ++i) {
            cranes[to-1].push(temp.top());
            temp.pop();
        }
    }
    for (int i = 0; i < cranes.size(); ++i) {
        cout << cranes[i].top();
    }
    return 0;
}
