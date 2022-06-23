#include<conio.h>
#include<iostream>
using namespace std;

int fG(int fn)
{
	int g;
	if (fn < 30) { g = fn; }
	if (fn > 30) { g = 2*(fn-30)+fn; }
	if (fn > 80) { g = fn+100; }
	
	return g;
}

int main()
{
	int n1;
	int n2;
	int n3;

	cout << "punkty agieha " << endl;
	cout << "Podaj wynik matury rozszerzonej 1: ";
	cin >> n1;
	cout << "Podaj wynik matury rozszerzonej 1: ";
	cin >> n2;
	cout << "Podaj wynik matury podstawowej z matematyki: ";
	cin >> n3;
	
	int g1 = (fG(n1));
	int g2 = (fG(n2));
	if (g1 > g2)
	{
		g1 = g1 * 0.75;
		g2 = g2 * 0.25;
	}
	else
	{
		g1 = g1 * 0.25;
		g2 = g2 * 0.75;
	}
	int W = (g1+g2)*4 + n3;
	cout << "Wynik: " << W;

	_getch();
}