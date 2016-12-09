#include <iostream>
#include <cstring>

using namespace std;

void main()
{
	char a[] = "enoti", b[] = "zahvatyat", c[] = "mir!", d[20], e[100], ps1[10], ps2[10], ps3[10], ps4[10], ps5[10], ps6[10];
	int dlina_c = strlen(c);
	strncpy(d, c + 1, 2);
	d[2] = '\0';
	strncpy(ps1, a + 1, 4);
	ps1[4] = '\0';
	strncpy(ps2, b, 3);
	ps2[3] = '\0';
	strncpy(ps3, c + 4, dlina_c - 4);
	ps3[dlina_c - 4] = '\0';
	strcat(d, ps1);
	strcat(d, ps2);
	strcat(d, ps3);
	cout << "stroka d - " << d << endl;
	strncpy(e, a, 1);
	e[1] = '\0';
	strncpy(ps4, b + 1, 3);
	ps4[3] = '\0';
	strncpy(ps5, b + 2, 3);
	ps5[3] = '\0';
	strncpy(ps6, c + 3, dlina_c - 3);
	ps6[dlina_c - 3] = '\0';
	strcat(e, ps4);
	strcat(e, d);
	strcat(e, ps5);
	strcat(e, ps6);
	cout << "stroka e - " << e << endl;
	system("pause");
}