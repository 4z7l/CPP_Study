#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char str[100];

	while (true)
	{
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin.getline(str, 100, '\n');

		if (strcmp(str, "yes") == 0)
		{
			cout << "�����մϴ�...";
			break;
		}
	}
	return 0;
}