#include <iostream>

int main() {
	float a, b, c, d, e;
	float max = 0;

	std::cout << "5���� �Ǽ��� �Է��϶�>>";
	std::cin >> a >> b >> c >> d >> e;

	if (max < a)
	{
		max = a;
	}
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}
	if (max < e)
	{
		max = e;
	}

	std::cout << "���� ū �� = " << max;

	return 0;
}