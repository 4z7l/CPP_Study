#include <iostream>	
#include <string>

using namespace std;

int main() {
	string str;
	int cnt = 0, ind = 0;

	cout << "���ڿ� �Է�>>";
	getline(cin, str);

	while (true) {
		ind = str.find('a', ind+1);
		if (ind == -1) break;
		else cnt++;
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;

	return 0;
}