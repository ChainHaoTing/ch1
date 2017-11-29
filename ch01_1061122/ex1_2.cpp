#include <iostream>
#include <cstdlib>

//using namespace std;

/*
	不使用 namespace 直接使用的方法 , 在前面加上 " 名稱空間:: "
*/

void ex1_2(void)
{
	int x; // 宣告變數 x, 用來儲存玩家輸入的攻擊力
	std::cout << "輸入攻擊力 :";
	std::cin >> x;
	std::cout << "對怪物的傷害值為 :" << x * 2 - 15 << std::endl;
}