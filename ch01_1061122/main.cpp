#include<iostream>
#include<cstdlib>

using namespace std;

extern void ex1_1();
extern void ex1_2();
extern void ex1_3();
extern void ex1_4();
extern void ex1_5();
extern void ex1_6();
extern void ex1_7();
extern void ex1_8();

void main(void)
{
	int input;
	do{
		cout << "�ϥΩR�W�Ŷ�  namespace  ex1_1" << endl;
		cout << "���ϥΩR�W�Ŷ�nacespace  ex1_2" << endl;
		cout << "bool ���O�P C++ ������r ex1_3" << endl;
		cout << "��X�e��(Output Width)   ex1_4" << endl;
		cout << "����覡(Alignment)      ex1_5" << endl;
		cout << "�]�w��T��(Precision)    ex1_6" << endl;
		cout << "�ƭȪ��i���(Radix)      ex1_7" << endl;
		cout << "Ū���r��                 ex1_8" << endl;

		cout << "------------------------------" << endl;
		cout << "�п�J�n���檺�d��(�� '0' �����{������!!) :";

		cin >> input;

		while (getchar() != '\n');  //Ū�����ݭn���r��

		switch (input)
		{
		case 0:break;
		case 1:ex1_1(); break;
		case 2:ex1_2(); break;
		case 3:ex1_3(); break;
		case 4:ex1_4(); break;
		case 5:ex1_5(); break;
		case 6:ex1_6(); break;
		case 7:ex1_7(); break;
		case 8:ex1_8(); break;
		//case 9:ex1_9(); break;
		default:cout << "��J���~!!" << endl; break;
		}
		system("pause");
		system("cls");

	} while (input != 0);
}