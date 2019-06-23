#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i =0;
    cin >> N;
    int arr[N];

    int *A = new int[N];
    while(i<N){
        cin >> A[i++];
    }
    while(i>0){
        cout << A[--i] << " "; 
    }
    delete[] A;
    return 0;
}

