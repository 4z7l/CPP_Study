#include <iostream>	
#include <string>
#include <cstring>

using namespace std;

int main() {
	int a, b;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";

	while (true)
	{
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> a;

		if (a < 0 || a > 4)
		{
			cout << "�ٽ� �ֹ��ϼ���!!\n";
			continue;
		}
		if (a == 4)
		{
			cout << "���� ������ �������ϴ�.\n";
			break;
		}

		cout << "���κ�?";
		cin >> b;
	
		switch (a)
		{
		case 1:
			cout << "«�� " << b << "�κ� ���Խ��ϴ�\n";
			break;
		case 2:
			cout << "¥�� " << b << "�κ� ���Խ��ϴ�\n";
			break;
		case 3:
			cout << "������ " << b << "�κ� ���Խ��ϴ�\n";
			break;
		default:
			break;
		}
	}

	return 0;
}