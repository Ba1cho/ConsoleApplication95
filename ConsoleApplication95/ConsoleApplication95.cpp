#include <iostream>
#include <string>
using namespace std;
class Cylinder
{
private:
	double h;
	double r;
	double V;
public:
	//Объем
	double volume() {
		return(h * (r * r) * 3.14);
	}
	//Square 
	double square_circ() {
		return  ((r * r) * 3.14);
	}
	double square_rec() {
		return(2 * 3.14 * r * h);
	}
	double square_all() {
		return (2 * h * r * (r + h));
	}
	void Output() {
		cout << "Что вы хотите выввести из данных параметров";
		int n = 100;
		while (n != 0)
		{
			cout << "1 Обем данной фигуры: " << (n == 1) ? cout << volume() : cout << " ";
			cout << "2 Площадь основания данной фигуры: " << (n == 2) ? cout << square_circ() : cout << " ";
			cout << "3 Боковаяя площадь данной фигуры: " << (n == 3) ? cout << square_circ() : cout << " ";
			cout << "4 Боковаяя площадь данной фигуры: " << (n == 4) ? cout << square_all() : cout << " ";
			cout << "5 Высота данной фигуры: " << (n == 5) ? cout << h : cout << " ";//вывод высоты
			cout << "6 Радиус данной фигуры: " << (n == 6) ? cout << r : cout << " ";
			cout << "7 Изменить высоту или радиус фигуры" << (n == 6) ? cout << r : cout << " ";
			cout << "0 выведет из меню для класса " << "\n";
		}
		cin >> n;
	}
	void input() {
		cout << "Введите высоту: ";
		cin >> h;
		cout << "Введите радиус: ";
		cin >> r;
	}
	Cylinder() {
		input();
		Output();
	}

	~Cylinder() {

	}

};
void max(double a, double b) {
	(a > b) ? cout << a : cout << b;
}
void menu() {
	//периметр площадь количество этажей высота, количество аудиторий массив сторон
}
int main()
{

	setlocale(LC_ALL, "Russian");
	Cylinder cul;
}