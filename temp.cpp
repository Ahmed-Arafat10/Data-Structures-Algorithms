// Created by ahmed on 1/29/2023.
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


int main() {
    // Declaration
    map <string, ll> mp;
    // Declaration in DESC Order
    map <string, ll, greater<string>> mp1;
    // Initialization
    map <string, ll> mp2 = {{"yousef",  11},
                           {"Mohamed", 21},
                           {"Ahmed",   21}};

    // For each
    // it.first > Key
    // it.second > Value
    for (auto it: mp) cout << it.first << " " << it.second << "\n";

    // Iterator
    map<string, ll>::iterator it = mp.begin();
    for (it; it != mp.end(); ++it) {
        cout << it->first << " ";
    }
    // Reverse Iterator
    map<string, ll>::reverse_iterator it2 = mp.rbegin();
    for (it2; it2 != mp.rend(); ++it2) {
        cout << it2->first << " ";
    }
}
