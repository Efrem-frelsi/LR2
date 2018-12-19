#include <iostream>
#include <string>
#include "Exception.h"

using namespace std;

class Price{
public:
	Price();//конструктор
	Price(const Price& value);//конструктор копирвоания
	~Price();//деструктор
	string get_name();
	void set_name(const string& name);
	string get_store();
	void set_store(const string& store);
	int get_cost();
	void set_cost(int name);
private:
	string name;//название твоара
	string store;//название магазина
	int cost;//стоимость
	friend istream& operator >>(istream& in, Price& p);
	friend ostream& operator <<(ostream& out, const Price& p);
};
