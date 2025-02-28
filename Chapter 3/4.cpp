#include <iostream>	
#include <string>

using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugerCoffee();
	void show();
	void fill();
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar)
{
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}
void CoffeeMachine::drinkEspresso()
{
	coffee = coffee - 1;
	water = water - 1;
}
void CoffeeMachine::drinkAmericano()
{
	coffee = coffee - 1;
	water = water - 2;
}
void CoffeeMachine::drinkSugerCoffee()
{
	coffee = coffee - 1;
	water = water - 2;
	sugar = sugar - 1;
}
void CoffeeMachine::show()
{
	cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
}
void CoffeeMachine::fill()
{
	coffee = 10;
	water = 10;
	sugar = 10;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugerCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}