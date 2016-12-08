#include <iostream>
#include <cstring>
using namespace std;
void main()
{
	char *s1 = new char[10];
	char *s2 = new char[10];
	char *s3 = new char[5];  //char *R = new char[10];
	int kol = 0;
	cout << "Vvedite stroku 1: ";
	scanf("%s", s1);
	cout << "Vvedite stroku 2: ";
	scanf("%s", s2);
	cout << "Vvedite stroku 3: ";
	scanf("%s", s3);
	strcat(s1, s2);
	int n = 0;
	char *R = strstr(s1, s3);
	while (R != NULL) {
		n = R - s1;
		//cout << n << ' ';
		R = strstr(s1 + n + 1, s3);
		kol++;
	}
	cout << "Kolichestvo vhozhdenii: " << kol << endl;
	system("pause");
}