#include<bits/stdc++.h>
using namespace std;

int main(){
    // Redirect cin and cout to text files for local testing
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x;
    // This will read from input.txt
    if(cin >> x) {
        // This will write to output.txt
        cout << x * 2 << endl;
    }

    return 0;
}
