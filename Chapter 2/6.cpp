#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char pwd[100], pwd2[100];

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> pwd;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> pwd2;

	if (strcmp(pwd, pwd2) == 0)
	{
		cout << "�����ϴ�\n";
	}
	else
	{
		cout << "���� �ʽ��ϴ�\n";

	}

	return 0;
}