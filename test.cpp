#include <iostream>
#include <vector>

struct Test {
	int a;
	Test() {a = 5;}
};

using namespace std;

int main() 
{
	Test a1, a2;
	vector<Test> b;
	b.push_back(a1);
	b.push_back(a2);
	cout << b[0].a << ' ' << b[1].a << '\n';
	a1.a = 6;
	cout << b[0].a << ' ' << b[1].a << '\n';
	b[1].a = 7;
	cout << b[1].a;
	return 0;
}
