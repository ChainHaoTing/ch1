#include <iostream> 
#include <cstdlib> 
#include <iomanip> 

using namespace std;

void main()
{
	int i , j, k, s;
	cout << "請輸入行數:";
	scanf("%d", &i);
	/*---------------------------*/
	for (j = 1; j <= i; j++) {
		for (s = i - j; s > 0; s--) cout << " ";
		for (k = 1; k <= j * 2 - 1; k++) cout << "*";
		cout << endl;
	}
	cout << "(a)" << endl;
	/*---------------------------*/
	cout << setw(i) << "*" << endl;
	for (j = 1; j < i; j++) {
		cout.width(i - j);
		for (k = 0; k < j; k++) cout << "*"; //左半邊*
		cout << " ";		 //中間的空格
		cout << setiosflags(ios::left);		//靠左
		for (k = 0; k < j; k++) cout << "*"; //右半邊*
		cout << resetiosflags(ios::left);	//取消靠左
		cout << endl;
	}
	cout << "(b)" << endl;
	cout << resetiosflags(ios::left);	//取消靠左
	/*---------------------------*/

	cout << setw(i) << "*" << endl;
	for (j = 1; j < (i + 1) / 2; j++) {		//上半部
		cout.width(i - j);
		for (k = 0; k < j; k++) cout << "*"; //左半邊*
		cout << "*";		 //中間的*
		cout << setiosflags(ios::left);		//靠左
		for (k = 0; k < j; k++) cout << "*"; //右半邊*
		cout << resetiosflags(ios::left);	//取消靠左
		cout << endl;
	}

	for (j = (i - 1) / 2; j > 1; j--) {  //下半部
		cout.width(i - j + 1);
		for (k = j - 1; k > 0; k--) cout << "*"; //左半邊*
		cout << "*";		 //中間的*
		cout << setiosflags(ios::left);		//靠左
		for (k = j - 1; k > 0; k--) cout << "*"; //右半邊*
		cout << resetiosflags(ios::left);	//取消靠左
		cout << endl;
	}
	cout << setw(i) << "*" << endl;
	cout << "(c)" << endl;

	/*---------------------------*/

	cout << setw(i) << "*" << endl;
	for (j = 1; j < (i + 1) / 2; j++) {		//上半部
		cout.width(i - j);
		cout << "*"; //左半邊*
		if (j >= 2)for (k = 0; k < j - 1; k++)cout << " ";
		cout << " ";		 //中間的空格
		cout << setiosflags(ios::left);		//靠左
		if (j >= 2)for (k = 0; k < j - 1; k++)cout << " ";
		cout << "*"; //右半邊*
		cout << resetiosflags(ios::left);	//取消靠左
		cout << endl;
	}


	for (j = (i - 1) / 2; j > 1; j--) {  //下半部
		cout.width(i - j + 1);
		cout << "*"; //左半邊*
		if (j > 2)for (k = 0; k < j-2 ; k++)cout << " ";
		cout << " ";		 //中間的空格
		cout << setiosflags(ios::left);		//靠左
		if (j > 2)for (k = 0; k < j-2; k++)cout << " ";
		cout << "*"; //右半邊*
		cout << resetiosflags(ios::left);	//取消靠左
		cout << endl;
	}
	cout << setw(i) << "*" << endl;
	cout << "(d)" << endl;

	/*----------------------------*/

	system("pause");
}