#include <iostream>	
#include <string>
#include <cstring>

using namespace std;

int main() {
	string name;
	string address;
	int age;

	cout << "�̸���?";
	getline(cin, name);

	cout << "�ּҴ�?";
	getline(cin, address);

	cout << "���̴�?";
	cin >> age;

	cout << name << ", " << address << ", " << age;

	return 0;
}