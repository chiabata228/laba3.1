#include <iostream>
#include "Time.h"

using namespace std;

Time SetTime();
Time Comparison(Time, Time);
Time Comparison(Time, Time, Time);
Time Adding(Time, Time);
Time Adding(Time, Time, Time);
Time Subtraction(Time t1, Time t2);
Time Subtraction(Time t1, Time t2, Time t3);


int main(){
	cout << "choose  operation" << endl; 
	cout << "1 Comparison" << endl;
	cout << "2 Adding times" << endl;
	cout << "3 Subtraction times" << endl;

	char a;
	Time t1, t2;
	cin >> a; 
	t1 = SetTime();
	t2 = SetTime();
	Time DisplayTime;
	switch(a)
	{
	case 1:
		cout << "set times to compare" << endl;
		DisplayTime = Comparison(t1,t2); 
		break;

	case 2: 
		cout << "choose times to add" << endl;
		DisplayTime = Adding(t1, t2);
		break;

	case 3:
		cout << "choose times to subtract" << endl;
		DisplayTime = Subtraction(t1, t2);
		break;
	}
}

Time Comparison(Time t1, Time t2)
{
	if (t1.GetHours() > t2.GetHours())
		return t1; 

	if (t2.GetHours() > t1.GetHours())
		return t2;

	if (t1.GetHours() == t2.GetHours()) {

		if (t1.GetMinutes() > t2.GetMinutes())
			return t1;

		if (t1.GetMinutes() < t2.GetMinutes())
			return t2;
		
		if (t1.GetMinutes() == t2.GetMinutes()) {

			if (t1.GetSeconds() == t2.GetSeconds())
				cout << "time is the same";
			if (t1.GetSeconds() > t2.GetSeconds())
				return t1;
			if (t1.GetSeconds() < t2.GetSeconds())
				return t2;
		}
	}
}

Time Comparison(Time t1, Time t2, Time t3)
{
	if (t1.GetHours() > t2.GetHours() && t1.GetHours() > t3.GetHours())
		return t1;
	
	if (t2.GetHours() > t1.GetHours() && t2.GetHours() > t1.GetHours())
		return t2;

	if (t3.GetHours() > t2.GetHours() && t3.GetHours() > t1.GetHours())
		return t3;

	

	if (t1.GetHours() == t2.GetHours() == t3.GetHours()) {

		if (t1.GetMinutes() > t2.GetMinutes() && t1.GetMinutes() > t3.GetMinutes())
			return t1;

		if (t2.GetMinutes() > t1.GetMinutes() && t2.GetMinutes() > t3.GetMinutes())
			return t2;

		if (t3.GetMinutes() > t1.GetMinutes() && t3.GetMinutes() > t2.GetMinutes())
			return t3;

		if (t1.GetMinutes() == t2.GetMinutes() == t3.GetMinutes()) {

			if (t1.GetSeconds() == t2.GetSeconds() == t3.GetSeconds())
				cout << "time is the same";
			if (t1.GetSeconds() > t2.GetSeconds() && t1.GetSeconds() > t3.GetSeconds())
				return t1;
			if (t2.GetSeconds() > t1.GetSeconds() && t2.GetSeconds() > t1.GetSeconds())
				return t2;
			if (t3.GetSeconds() > t1.GetSeconds() && t3.GetSeconds() > t1.GetSeconds())
				return t3;
		}
	}
}

Time SetTime() {
	Time t;
	int h, m, s;

	cout << "enter hours" << endl;
	cin >> h;
	t.SetHours(h);

	cout << "enter minutes" << endl;
	cin >> m;
	t.SetMinutes(m);

	cout << "enter seconds" << endl;
	cin >> s;
	t.SetSeconds(s);	
	
	return t; 
}

Time Adding(Time t1, Time t2){
	Time Sum;

	Sum.SetHours(t1.GetHours() + t2.GetHours());
	Sum.SetMinutes(t1.GetMinutes() + t2.GetMinutes());
	Sum.SetSeconds(t1.GetSeconds() + t2.GetSeconds());

	return Sum;
}

Time Adding(Time t1, Time t2, Time t3) {
	Time Sum;

	Sum.SetHours(t1.GetHours() + t2.GetHours() + t3.GetHours());
	Sum.SetMinutes(t1.GetMinutes() + t2.GetMinutes() + t3.GetMinutes());
	Sum.SetSeconds(t1.GetSeconds() + t2.GetSeconds() + t3.GetSeconds());

	return Sum;
}

Time Subtraction(Time t1, Time t2) {
	Time Sub;

	Sub.SetHours(t1.GetHours() - t2.GetHours());
	Sub.SetMinutes(t1.GetMinutes() - t2.GetMinutes());
	Sub.SetSeconds(t1.GetSeconds() - t2.GetSeconds());

	return Sub;
}

Time Subtraction(Time t1, Time t2, Time t3) {
	Time Sub;

	Sub.SetHours(t1.GetHours() - t2.GetHours() - t3.GetHours());
	Sub.SetMinutes(t1.GetMinutes() - t2.GetMinutes() - t3.GetMinutes());
	Sub.SetSeconds(t1.GetSeconds() - t2.GetSeconds() - t3.GetSeconds());

	return Sub;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
