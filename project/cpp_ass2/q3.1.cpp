#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1 = "hello";
	string s2 = "world";
	cout << s1 << " " << s2 << endl;

	s1.swap(s2);
	cout << s1 << " " << s2 <<endl;
	return 0;
}
        
