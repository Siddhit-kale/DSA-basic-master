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

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false; 
}

void demoOfSorting() {
    vector<int, int> v;

    int arr[5], n;  // e.x. {1, 5, 4, 2, 3}
    sort(arr, arr + n); // first arg is for 1st ele. or 2nd for array + size of the array
    
    sort(v.begin(), v.end()); // for vector

    sort(arr + 2, arr + 4); // for sort specific portion of array

    sort(arr, arr + n, greater<int>()); // for sorting in decending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    
    // sort it according to 2nd element if 2nd element is same, then sort
    // it according to 1st element but in descending

    sort(a, a+n, comp);

    // {{4, 1}, {2, 1}, {1, 2}}

    int num =  7;
    int cnt = __builtin_popcount(num);
    
    long long ll =  16514387316731;
    int cnt = __builtin_popcountll(ll);

    string s = "123";
    sort(s.begin(), s.end());
    do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    int max = *max_element(arr, arr + n);
}

void demoOfMap() {
    map<int, int> mpp;

    // map<int, pair<int, int>> mpp;

    // map <pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.insert({2, 4});
    mpp.emplace(3, 1);
    // Assuming you want to add pairs with map<int, int>, you can only add single key-value pairs.
    // For mpp[{2, 3}] = 10;, you would need a different type of map like map<pair<int, int>, int>.

    // Printing elements of the map
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // Accessing elements
    cout << mpp[1] << endl;  // Should print 2
    cout << mpp[5] << endl;  // Should print 0, as it does not exist

    // Finding an element
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << it->second << endl; // Should print 1
    }

    // Finding an element that does not exist
    it = mpp.find(5);
    if (it == mpp.end()) {
        cout << "Element not found" << endl;
    }

    // syntex:
    // auto it = mpp.lower_bound(2);
    // auto it = mpp.upper_bound(3);

    // erase, swap, size, empty are same as above
}

void demoOfUnOrderedSet() {
    unordered_set<int> us;
    // upper_bound and lower_bound function does not works, rest all functions are same as
    // above, it does not stores in any particular order it has a better complexity than set in most
    // cases, except some when collision happens 
}

void demoOfMultiSet() {

    // everything is same as set
    // only store duplicate elements also

    multiset<int> ms;
    ms.insert(1);    // {1}
    ms.insert(1);    // {1, 1}
    ms.insert(1);    // {1, 1, 1}

    ms.erase(1);     // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));
    
    // rest all function same as set
}

void demoOfSet() {
    // it stores unique data

    set<int> s;
    s.insert(1);    // {1}
    s.emplace(2);   // {1, 2}
    s.insert(2);    // {1, 2}
    s.insert(3);    // {1, 2, 4}
    s.insert(4);    // {1, 2, 3, 4}

    // Functionality of insert in vector can be use also, that only increases efficiency
    // begin(), end(), rbegin(), rend(), size(), empty() & swap() are same as those of above

    // e.x. {1, 2, 3, 4, 5}
    auto it = s.find(3);
    
    // e.x. {1, 2, 3, 4, 5}
    auto it1 = s.find(6);

    // e.x. {1, 4, 5}
    s.erase(5);     //erases 5 takes logarithmic time

    int cnt = s.count(1);

    auto it2 = s.find(3);
    s.erase(it2);       // it takes constant time

    // e.x. {1, 2, 3, 4, 5}
    auto it3 = s.find(2);    
    auto it4 = s.find(4);    
    s.erase(it3, it4);  // after erase {1, 4, 5} {first, last}

    // lower_bound() and upper_bound() function works in the same way in vector it does

    // syntex:
    // auto it5 = s.lower_bound(2);
    // auto it6 = s.upper_bound(3);
}

void demoOfPriorityQueue() {
    priority_queue<int> pq;         // also knon as Maximum Heap
    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10);  // {10, 8, 5, 2}

    cout << pq.top();   // prints 10

    pq.pop();   // {8, 5, 2}

    cout << pq.top();    // prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);     // {5}
    pq1.push(2);     // {2, 5}
    pq1.push(8);     // {2, 5, 8}
    pq1.emplace(10);  // {2, 5, 8, 10}

    cout << pq1.top();   // prints 2
}

void demoOfQueue() {
    queue<int> q;
    q.push(1);     // {1}
    q.push(2);     // {1, 2}
    q.emplace(4);  // {1, 2, 4}

    q.back() += 5;

    cout << q.back();   // prints 9

    cout << q.front();  // prints 1

    q.pop();    // {2, 9}

    cout << q.front();  //prints 2

    // size swap empty same as stack
}

void demoOfStack() {
    stack<int> st;
    st.push(1);     // {1}
    st.push(2);     // {2, 1}
    st.push(3);     // {3, 2, 1}
    st.push(4);     // {4, 3, 2, 1}
    st.emplace(5);  // {5, 4, 3, 2, 1}

    cout << st.top();   // prints 5 "** st[2] is invalid ** [means accessing the indexes]"

    st.pop();   // {4, 3, 2, 1}

    cout << st.size();  // 4

    cout << st.empty();

    stack<int> st2;
    st2.swap(st);

}

void demoOfList() {
    list<int> ls;

    ls.push_back(2);    // {2}

    ls.emplace_back(4); // {2, 4}

    ls.push_front(5);   // {5, 2, 4}
    
    ls.emplace_front();   // {5, 2, 4}

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main() {
    explainpair();
    explainvector();
    demoOfSorting();
    demoOfMap();
    demoOfUnOrderedSet();
    demoOfMultiSet();
    demoOfSet();
    demoOfPriorityQueue();
    demoOfQueue();
    demoOfStack();
    demoOfList();
    return 0;
}