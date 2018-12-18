#include "Price.h"
#include <cstdlib>

const unsigned size = 8;
//сортирвока по имени
int cmp(const void *f, const void *l){
	return ((Price*)f)->get_name() > ((Price*)l)->get_name();
}

//счиытваем данные
void read(Price *p){
   for(unsigned i = 0; i < size; ++i){
		try{
			cout << "Имя Магазин Стоимость\n";
			cin >> p[i];
		}
		catch(const Exception& exc){
		 cout << exc.what();
		 --i;
		}
   }
   qsort(p, size, sizeof(Price), cmp);
}

//поиск
void search(Price *p){
	cout << "Введите название\n";
	string name;
	cin >> name;
	int i;
	bool flag = true;
	/*поиск с конца, если слово ближе к концу*/
	for(i = 0; i < size; ++i){
		if(p[i].get_name() == name){ 
			cout << p[i] << '\n';
			flag = false;
		}
	}
	if(flag) cout << "Не нашли";
	
}
int main(){
	setlocale(LC_ALL, "");
	Price p[size];
	int a;
	for(;;){
		cout << "\n1. Считать\n2. Найти\n3. Выход\n";
		cin >> a;
		if(a == 1){
			read(p);
		}
		else if(a == 2){
			search(p);
		}
		else{
			return 0;
		}
	}
	return 0;
}
