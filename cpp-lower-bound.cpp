#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    int Q;
    vector<int> x;
    vector<int> y;
    int temp_x;
    int temp_y;
    int count = 0;
    std::vector<int>::iterator low;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> temp_x;
        x.push_back(temp_x);
    }
    cin >> Q;
    for(int i=0; i<Q; i++){
        cin >> temp_y;
        for(int j=0; j<N; j++){
            if(temp_y == x[j]){
                cout << "Yes " << j+1 << endl;
                count = 0;
                break;
            }
            else{
                count++;
            }
        }
        if(count == N){
            count = 0;
          low = lower_bound(x.begin(), x.end(), temp_y);
          cout << "No " << (low-x.begin()+1) << endl;
        }

    }
    return 0;
}
