#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int temp;
    cin >> N;
    int all[N];
    for(int i = 0; i < N; i++){
        cin >> temp;
        //cout << temp;
        all[i]=temp;
    }
    for(int i = 0; i < N; i++){
       printf("%d ", all[N-1-i]);
    }
    return 0;
}
