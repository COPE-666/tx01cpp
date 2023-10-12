#include <iostream>  // C++包含头文件(输入输出流)
#include <iomanip>  // 使用到setw函数，要加头文件
using namespace std;


inline void testfunc()
{
	cout << "湖南大学中南大学" << endl;
}

int func(int x, int y)
{
	return x + y;
}
int func(int x)
{
	return x*x;
}

double func(double x, double y)
{
	return x + y;
}

int main()  // 主函数 main有前面int主函数的返回值为整型
{
	//int x = 0;
	//cout << "\n欢迎来到C++语言编程世界!" << endl<<endl;  // endl表示换行

	//cout << "x=" << x << endl;

	//// 从键盘输入x的值
	//cout << "请输入x的值:";
	//cin >> x;
	//cout << "\nx=" << x << endl;

	/*cout << "湖南省" << setw(20) << "长沙市" << endl;
	testfunc();*/


	cout << "3+3=" << func(3, 3) << endl;
	cout << "8*8=" << func(8) << endl;
	cout << "3.4+5.6=" << func(3.4,5.6) << endl;

	return 0;
}

