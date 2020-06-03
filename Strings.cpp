#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    cin >> a;
    cin >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;;
    string suba;
    string subb;
    for(int i = 1; i < a.size(); i++){
        suba = suba + a[i];
    }
    for(int i = 1; i < b.size(); i++){
        subb = subb + b[i];
    }
    cout <<  b[0] + suba + " " + a[0] + subb  << endl;
  
    return 0;
}
