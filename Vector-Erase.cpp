#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int x;
    vector<int> s;
    int a, b;
    int temp;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        s.push_back(temp);
    }
    cin >> x;
    cin >> a >> b;

    s.erase(s.begin()+x-1);
    s.erase(s.begin()+a-1, s.begin()+b-1);

    cout << s.size() << endl;
    for(int i=0; i<s.size(); i++){
        cout << s[i] << " ";
    }

    return 0;
}
