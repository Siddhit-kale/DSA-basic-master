#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void print(int n) {
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void print1(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n) {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=i; j++) {
                cout << j<<" ";
            }
            cout << endl;
        }
    }

void print3(int n) {
        for(int i=1; i <= n; i++) {
            for(int j=1; j <= i; j++) {
                cout << i <<" ";
            }
            cout << endl;
        }
    }    

void print4(int n) {
	    for (int i = n; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                cout << "* ";
            }
        cout << endl;
        }
	}

void print5(int n) {
	    for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << j <<" ";
            }
        cout << endl;
        }
	}

void print6(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) { 
                cout << "*";
            }
        cout << endl;
        }
    }



void print7(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * (n - i) - 1; j++) {
                cout << "*";
            }
        cout << endl;
        }
	}

void print8(int n) {
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) { 
                cout << "*";
            }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * (n - i) - 1; j++) {
                cout << "*";
            }
        cout << endl;
    }

}

void print9(int n) {
    for(int i=0; i<=n; i++) {
        for(char j='A'; j<='A'+i; j++) {
            cout<<j;
        }
        cout<<endl;
    }
}

void print10(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
}

void print11(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'a';
        for (int j = 1; j <= i; j++) cout << ch++;
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        char ch = 'a';
        for (int j = 1; j <= i; j++) cout << ch++;
        cout << endl;
    }
}

int main() {
    int n = 5;
    print(n);
    print1(n);
    print2(n);
    print3(n);
    print4(n);
    print5(n);
    print6(n);
    cout<<endl;
    print7(n);
    cout<<endl;
    print8(n);
    print9(n);
    print10(n);
    print11(n);

}

