#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Point {
	int x, y;
};

struct Chair {
	string name;
	int age;
	bool is_actual;
	float sidel;
	Point place;

	void get_info() {
		cout << "Nickname: " << name << ". You age: " << age << " . I cit " << sidel << endl;
	}
};

int main() {
	setlocale(LC_ALL, "RU");

	Chair gamerchair;
	gamerchair.name = "Hyper X";
	gamerchair.age = 1;
	gamerchair.sidel = 100;
	gamerchair.place.x = 100;
	gamerchair.place.y = 20;

	Chair defaultchair;
	defaultchair.name = "Стул от Валерки";
	defaultchair.age = 10;
	defaultchair.sidel = 600;
	defaultchair.place.x = 50;
	defaultchair.place.y = 30;

	// cout << gamerchair.name << " - " << defaultchair.name;
	gamerchair.get_info();
	defaultchair.get_info();

	return 0;
}