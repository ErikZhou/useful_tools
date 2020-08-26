//https://www.bogotobogo.com/cplusplus/CppCrashDebuggingMemoryLeak.php
#include <iostream>

using namespace std;

class A 
{
	int value;
public:
	void dumb() const {cout << "dumb()\n";}
	void set(int x) {cout << "set()\n"; value=x;}
	int get() const {cout << "get()\n"; return value;}
};

int main()
{
	A *pA1 = new A;
	A *pA2 = NULL;
   
	pA1->dumb();
	pA1->set(10);
	pA1->get();
	pA2->dumb();
	pA2->set(20);
	pA2->get();

        return 0;
}
