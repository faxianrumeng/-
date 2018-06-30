#ifndef GOLDBACH_H
#define GOLDBACH_H
struct combination
{
	int one;
	int two;
};
class GoldbachConjection
{
public:
	GoldbachConjection(){ ptr = nullptr; }
	combination Decompose(const int number);
	int PrimeNumber(const int inter);
	bool judge(int* point, int data, int length);
	int* ptr;
};
#endif