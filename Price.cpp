#include "Price.h"

Price::Price(){//конструктор
	cout << "\nКонструктор\n";
}
Price::Price(const Price& value){//конструктор копирвоания
	cout << "\nКоснтрукторк копирвоания\n";
}
Price::~Price(){//деструктор
	cout << "\nДеструктор\n";
}
string Price::get_name(){
	return name;
}
void Price::set_name(const string& name){
	this->name = name;
}
string Price::get_store(){
	return store;
}
void Price::set_store(const string& store){
	this->store = store;
}
int Price::get_cost(){
	return cost;
}
void Price::set_cost(int cost){
	this->cost = cost;
}

istream& operator >>(istream& in, Price& p){
	if(!(in >> p.name))	throw Exception("name reading exception");
	if(!(in >> p.store))	throw Exception("store reading exception");
	if(!(in >> p.cost))	throw Exception("cost reading exception");
	return in;
}
ostream& operator <<(ostream& out, const Price& p){
	out << p.name << ' ' << p.store << ' ' << p.cost;
	return out;
}
