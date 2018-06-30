#include "goldbach.h"
#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int j = 0;
	GoldbachConjection* Mygraph = &GoldbachConjection();
	combination MyCombination = Mygraph->Decompose(17);
	cout << MyCombination.one<< " " << MyCombination.two << endl;
}