// Lab_03_1.cpp
// < ������� �������� >
// ����������� ������ �3.1
// ������������, ������ ��������:������� ���� �����.
// ������ 24

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x = "; cin >> x;

	A = x;

	// ����� 1: ������������ � ��������� ����
	if (x <= -1.0)
		B = log10(abs(cos(5.0 * x))) + exp((1.0 / x) + x);
	if (-1.0 < x && x < -0, 4)
		B = sqrt(pow(2.0 - x, 3)) - tan(x);
	if (x >= 0,4)
		B = sin(5.0 * x) - sqrt(abs(1.0 - x));
	y = A + B;

	cout << endl;
	cout << "1) y =" << y << endl;

	// ����� 2: ������������ � ����� ����

	if (x <= -1.0)
		B = log10(abs(cos(5.0 * x))) + exp((1.0 / x) + x);
	else
		if (-1.0 < x && x < -0, 4)
			B = sqrt(pow(2.0 - x, 3)) - tan(x);
		else
			B = sin(5.0 * x) - sqrt(abs(1.0 - x));
	y = A + B;

	cout << "2) y =" << y << endl;

	cin.get();
	return 0;
}
