#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	if(!in){
		cout << "Ошиба открытия файла";
		system("pause>>void");
		return 0;
	}
	string input;
	stringstream sstreambuf;	//строковый поток
	while(getline(in, input)){//считываем по предложению
		 string temp = sstreambuf.str();
		 sstreambuf.str(string());
		 sstreambuf << input << '\n' << temp; //заносим в строковый поток

	}
	while(getline(sstreambuf, input)){
		cout << input << '\n';// выводим предложения
	}
	in.close();//закрываем файл										   
	system("pause>>void");
}
