#include <iostream>  // C++����ͷ�ļ�(���������)
#include <iomanip>  // ʹ�õ�setw������Ҫ��ͷ�ļ�
using namespace std;


inline void testfunc()
{
	cout << "���ϴ�ѧ���ϴ�ѧ" << endl;
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

int main()  // ������ main��ǰ��int�������ķ���ֵΪ����
{
	//int x = 0;
	//cout << "\n��ӭ����C++���Ա������!" << endl<<endl;  // endl��ʾ����

	//cout << "x=" << x << endl;

	//// �Ӽ�������x��ֵ
	//cout << "������x��ֵ:";
	//cin >> x;
	//cout << "\nx=" << x << endl;

	/*cout << "����ʡ" << setw(20) << "��ɳ��" << endl;
	testfunc();*/


	cout << "3+3=" << func(3, 3) << endl;
	cout << "8*8=" << func(8) << endl;
	cout << "3.4+5.6=" << func(3.4,5.6) << endl;

	return 0;
}

