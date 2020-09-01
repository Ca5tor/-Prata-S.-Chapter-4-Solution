#include <iostream>
#include<string>
#include<cstring>
#include<array>

using namespace std;

void Part_0() {
		const int SIZE = 20;
		char first_name[SIZE];

	cout << "What is your first name? ";
	cin.getline(first_name, SIZE);
	cout << endl;

		char last_name[SIZE];

	cout << "What is your last name? ";
	cin.getline(last_name, SIZE);
	cout << endl;

		char grade;

	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << endl;

		int age;

	cout << "What is your age? ";
	cin >> age;
	cout << endl;

	cout << "Name: " << last_name << "," << first_name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;

}

void Part_1() {
		string name, dessert;

	cout << "Enter your name:\n";
	getline(cin, name);  // ������ ��� ������ � ������ �������

	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

}

void Part_2() {
		char first_name[20];

	cout << "Enter your first name: ";
	cin.getline(first_name, 20);
	cout << endl;

		char last_name[20];

	cout << "Enter your last name: ";
	cin.getline(last_name,20);
	cout << endl;

		char str_char[40];

	strcpy_s(str_char, last_name);
	strcat_s(str_char, ", ");
	strcat_s(str_char, first_name);

	cout << "Here's the information in a single string: ";
	cout << str_char << endl;

}

void Part_3() {
		string first_name;

	cout << "Enter your first name: ";
	cin >> first_name;
	cout << endl;

		string last_name;

	cout << "Enter your last name: ";
	cin >> last_name;
	cout << endl;

	cout << "Here's the information in a single string: ";
	cout << ((last_name + ", ") + first_name) << endl;

}

void Part_4() {
	struct CandyBar{
		string name_candy_boxs;
		double weight_candy_boxs;	//���
		int calories;

	};

		CandyBar snack;

	cout << "Enter name snack: ";
	getline(cin, snack.name_candy_boxs);
	cout << endl;

	cout << "Enter weight snack: ";
	cin >> snack.weight_candy_boxs;
	cout << endl;

	cout << "Enter calories snack: ";
	cin >> snack.calories;
	cout << endl;

	cout << "CandyBar snack:\nName: " << snack.name_candy_boxs
		 << " \nWeight: " << snack.weight_candy_boxs
		 << " \nCalories: " << snack.calories << endl;

}

void Part_5() {
	struct CandyBar_2 {
		string name_candy_boxs;
		double weight_candy_boxs;	//���
		int calories;

	};

	CandyBar_2 snack2[] = {
		{"popokops", 2.4, 200},
		{"snacks", 3.12, 345},
		{"kakaha", 23.4, 2345}

	};

	cout << "CandyBar snack:\nName: " << snack2[0].name_candy_boxs
		<< " \nWeight: " << snack2[0].weight_candy_boxs
		<< " \nCalories: " << snack2[0].calories << endl;
	cout << endl;

	cout << "CandyBar snack:\nName: " << snack2[1].name_candy_boxs
		<< " \nWeight: " << snack2[1].weight_candy_boxs
		<< " \nCalories: " << snack2[1].calories << endl;
	cout << endl;

	cout << "CandyBar snack:\nName: " << snack2[2].name_candy_boxs
		<< " \nWeight: " << snack2[2].weight_candy_boxs
		<< " \nCalories: " << snack2[2].calories << endl;
	cout << endl;

}

void Part_6(){
	struct MarketAnalysis{
		string name;
		int diameter;
		int weight;

	};

		MarketAnalysis pizza_0;

	cout << "Enter company name - pizza manufacturer:\n";
	getline(cin, pizza_0.name);
	cout << endl;

	cout << "Enter diameter pizza:\n";
	cin >> pizza_0.diameter;
	cout << endl;

	cout << "Enter weight pizza:\n";
	cin >> pizza_0.weight;
	cout << endl;

	cout << "\tYour info on pizza:\n";
	cout << "-Name company'\'manufacturer: " << pizza_0.name << endl;
	cout << "-Diameter your pizza: " << pizza_0.diameter << endl;
	cout << "-Weight your pizza: " << pizza_0.weight << endl;
	cout << endl;
	cin.get();

		MarketAnalysis pizza_1;

	cout << "Enter next company name - pizza manufacturer:\n";
	getline(cin, pizza_1.name);
	cout << endl;

	cout << "Enter diameter pizza:\n";
	cin >> pizza_1.diameter;
	cout << endl;

	cout << "Enter weight pizza:\n";
	cin >> pizza_1.weight;
	cout << endl;

	cout << "\tYour info on pizza:\n";
	cout << "-Name company'\'manufacturer: " << pizza_1.name << endl;
	cout << "-Diameter your pizza: " << pizza_1.diameter << endl;
	cout << "-Weight your pizza: " << pizza_1.weight << endl;

}

void Part_7(){
	struct MyStruct_part_7{
		string name;
		int diameter_pizza;
		int weight_pizza;

	};

	MyStruct_part_7* var_struct = new MyStruct_part_7;//������������ ���������

	cout << "Enter diameter pizza:\n";
	cin >> var_struct->diameter_pizza;
	cin.get();
	cout << endl;

	cout << "Enter company name - pizza manufacturer:\n";
	getline(cin, var_struct->name);
	cout << endl;

	cout << "Enter weight pizza:\n";
	cin >> var_struct->weight_pizza;
	cout << endl;

	cout << "\tYour info on pizza:\n";
	cout << "-Name company'\'manufacturer: " << var_struct->name << endl;
	cout << "-Diameter your pizza: " << var_struct->diameter_pizza << endl;
	cout << "-Weight your pizza: " << var_struct->weight_pizza << endl;
	cout << endl;
	cin.get();

	delete var_struct;//�������� ���������� ������ ��� ���������

}

void Part_8(){
	struct MyStruct {
		string name_candy;
		double weight_candy;	//���
		int calories;

	};

	MyStruct *m_struct = new MyStruct[3];

	/////////////////////////////////////////////////////

	cout << "Name 1 candy:";
	getline(cin, m_struct[0].name_candy);
	cout << endl;

	cout << "1 Weight:";
	cin >> m_struct[0].weight_candy;
	cout << endl;

	cout << "1 Calories:";
	cin >> m_struct[0].calories;
	cout << endl;

	cout << "***************************" << endl;
	cout << "Name 1 candy:" << m_struct[0].name_candy << endl;
	cout << "1 Weight:" << m_struct[0].weight_candy << endl;
	cout << "1 Calories:" << m_struct[0].calories << endl;
	cout << "***************************" << endl << endl;
	cin.get();

	/////////////////////////////////////////////////////

	cout << "Name 2 candy:";
	getline(cin, m_struct[1].name_candy);
	cout << endl;

	cout << "2 Weight:";
	cin >> m_struct[1].weight_candy;
	cout << endl;

	cout << "2 Calories:";
	cin >> m_struct[1].calories;
	cout << endl;

	cout << "***************************" << endl;
	cout << "Name 2 candy:" << m_struct[1].name_candy << endl;
	cout << "2 Weight:" << m_struct[1].weight_candy << endl;
	cout << "2 Calories:" << m_struct[1].calories << endl;
	cout << "***************************" << endl << endl;
	cin.get();

	/////////////////////////////////////////////////////

	cout << "Name 3 candy:";
	getline(cin, m_struct[2].name_candy);
	cout << endl;

	cout << "3 Weight:";
	cin >> m_struct[2].weight_candy;
	cout << endl;

	cout << "3 Calories:";
	cin >> m_struct[2].calories;
	cout << endl;

	cout << "***************************" << endl;
	cout << "Name 3 candy:" << m_struct[2].name_candy << endl;
	cout << "3 Weight:" << m_struct[2].weight_candy << endl;
	cout << "3 Calories:" << m_struct[2].calories << endl;
	cout << "***************************" << endl << endl;
	cin.get();

	delete []m_struct;

}

void Part_9(){
	array<int, 3> a1;

	cout << "1 ���������: ";
	cin >> a1[0];
	cout << endl;

	cout << "2 ���������: ";
	cin >> a1[1];
	cout << endl;

	cout << "3 ���������: ";
	cin >> a1[2];
	cout << endl;

	cout << "1-� ����� = " << a1[0] << endl;
	cout << "2-� ����� = " << a1[1] << endl;
	cout << "3-� ����� = " << a1[2] << endl;
	cout << "����.��������� = " << (a1[0] + a1[1] + a1[2]) / 3 << endl;

}

int main(){
	setlocale(0, "");

	//Part_9();
	return 0;
}
