#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N=0;
    int input = 0;
    vector<int>v; 

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> input;
        v.push_back(input);
    }
    ;
    sort(v.begin(),v.end()); 
    for(int i = 0; i<N; i++){
        cout << v[i] << " ";
    }
    return 0;
}
