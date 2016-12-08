#include <iostream>
using namespace std;
void main()
{
	int a, b, c;
	cout << "Vvedite a,b: ";
	cin >> a >> b;
	c = 2 * a + 3 * b + 4 * a*b*b;
	cout <<"C: "<< c;
	system("pause");
}