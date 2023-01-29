// Created by ahmed on 1/29/2023.
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


int main() {
    map <string, ll> mp;
    map <string, ll, greater<string>> mp;
    map <string, ll> mp = {{"yousef",  11},
                           {"Mohamed", 21},
                           {"Ahmed",   21}};

    for (auto it: mp)cout << it.first << " " << it.second;

    map<string, ll>::iterator it = mp.begin();
    for (it; it != mp.end(); ++it) {
        cout << it->first << " ";
    }

    map<string, ll>::reverse_iterator it = mp.rbegin();
    for (it; it != mp.rend(); ++it) {
        cout << it->first << " ";
    }

    mp["Arafat"] = 30;
    mp.insert(pair<string, ll>("testtt", 30));
    mp.insert({"Arafatds", 30});
    mp.insert({"Ahmed", 30}); //Will Be Ignored As Key Already Exist
    mp.insert(make_pair("Arafatds", 30));
/// insert a single element or the range of element in the map.Its time complexity is O(logN)
///, when only element is inserted and O(1) when position is also given.

    cout << mp.at("Arafat"); /Throw
    Exceptions
    If
    Not Exist
    for (auto it: mp)cout << it.first << " " << it.second << "\n";
    cout << "\n";
    mp.erase("Arafat");
    log(n)
    auto it = mp.begin();
    mp.erase(++it);
    mp.erase(it);
    mp.erase(++it, mp.find("Arafatds"));///.find() O(logN).
    for (auto it: mp)cout << it.first << " " << it.second << "\n";

    auto low = mp.lower_bound("Mohamed");// First Number Which Is Equal Or Greater Than 3
    auto up = mp.upper_bound(
            "Mohamed");// First Number Which Is Greater Than 3   -> if element Not Exist It Returns Iterator For Last Element (.end()-1)
    mp.erase(mp.begin(), up);
    cout << up->first << " " << up->second;
    mp.insert()
    mp.count(Key);
    O(logN).


    for (auto it: mp)cout << it.first << " " << it.second << "\n";
    cout << "\n";
    map<string, ll>::iterator it = mp.begin();
    it->second = 1231;
    it->first = "abc";//Error Can't Edit Key
    mp.size();
    mp.max_size();
    mp.max_size();
    mp.empty();// O(1).
    mp.clear(); //O(N).
    mp.swap(mp2);
}
