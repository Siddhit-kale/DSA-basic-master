#include <bits/stdc++.h>
using namespace std;

void explainpair() {
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {3, 4}};

    cout << p1.first<<" "<< p1.second.second<<" "<<p1.second.first<< endl;

    pair<int, int> arr[] = {{1,2}, {2,5}, {2,6}};

    cout << arr[1].second << endl;
}

void explainvector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});

    vector<int> v2(5, 20);
    vector<int> v3(5);

    vector<int> v4(v2);

    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }

    vector<int>::iterator it = v2.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it1 = v2.end();
    // vector<int>::iterator it2 = v2.rend();
    // vector<int>::iterator it3 = v2.rbegin();

    cout << v[0] << " "<< v.at(0);
    cout << v.back() << " ";

    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
        cout << (*it) << " ";
        cout<<endl;
    }

    for (auto it = v2.begin(); it != v2.end(); it++) {
        cout << (*it) << " ";
    }
}

int main() {
    explainpair();
    explainvector();
    return 0;
}