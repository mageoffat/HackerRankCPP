#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
stringstream ss(str);   //??
vector<int> result;
char ch;
int tmp;
    while(ss >> tmp) {      //while ss is an int do this
        result.push_back(tmp); // push back the int
        ss >> ch;           // and skip over the ',' character
    }
return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
