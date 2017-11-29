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
		cout << "使用命名空間  namespace  ex1_1" << endl;
		cout << "不使用命名空間nacespace  ex1_2" << endl;
		cout << "bool 型別與 C++ 的關鍵字 ex1_3" << endl;
		cout << "輸出寬度(Output Width)   ex1_4" << endl;
		cout << "對齊方式(Alignment)      ex1_5" << endl;
		cout << "設定精確度(Precision)    ex1_6" << endl;
		cout << "數值的進位制(Radix)      ex1_7" << endl;
		cout << "讀取字串                 ex1_8" << endl;

		cout << "------------------------------" << endl;
		cout << "請輸入要執行的範例(或 '0' 結束程式執行!!) :";

		cin >> input;

		while (getchar() != '\n');  //讀掉不需要的字元

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
		default:cout << "輸入錯誤!!" << endl; break;
		}
		system("pause");
		system("cls");

	} while (input != 0);
}