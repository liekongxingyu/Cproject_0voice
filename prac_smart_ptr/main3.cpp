#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;



int main() {
    int b = 2;
    int &r1 = b;
    const int &a = 1;

	cout << a << "\n";
    cout << r1 << "\n";
	return 0;
}
