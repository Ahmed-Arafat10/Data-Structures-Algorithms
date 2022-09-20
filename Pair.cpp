#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
Pair : it's used to insert two values in one container

Pair <First_Element,Second_Element>
        .first        .second


*/
int main()
{

    //Declare pair
    pair<string,ll> p;

    //Initialize pair
    pair<string,ll> p2("Arafat",22); //Constructor
    pair<string,ll> p3 = make_pair("Arafat",22);
    pair<string,ll> p4 = {"Arafat",22};

    //Declare then assign
    pair<string,ll> p5;
    p5.first = "Ahmed";
    p5.second = 20;

    //Create Pair INSIDE Pair
    //   first   second(first,second)
    pair<string, pair<string,ll>> p6;
    p6.first = "Ahmed";
    p6.second.first = "BIS";
    p6.second.second = 22;

    //Create THREE Pairs inside each other
    //   first   second(first((first,second),(first,second)),second)
    pair<string, pair< pair<string,ll>,ll> > p7;
    p7.first = "Arafat";
    p7.second.first.first = "BIS";
    p7.second.first.second = 22;
    p7.second.second = 2000;

    //Create Pair inside Vector
    vector<pair<string,ll>> vp;

    //Insert Pair inside Vector
    vp.push_back({"Ahmed",20});
    vp.push_back(make_pair("Ahmed",20));
    vp.push_back(pair<string,ll>("Ahmed",20));
    pair<string,ll> p8 = {"Ahmed",20};
    vp.push_back(p8);

    //Access Pair's values inside Vector
    cout<<vp[0].first<<" "<<vp[0].second;

    //Declare an iterator
    vector<pair<string,ll>>::iterator it;
    for(it = vp.begin(); it != vp.end(); it++)
    {
        //First Access Method
        cout<<(*it).first<<" "<<(*it).second;
        //Second Access Method (Easer)
        cout<<it->first<<" "<<it->second;
    }
    for(auto &it:vp) cout<<it.first<<" "<<it.second;
    puts("");
}
