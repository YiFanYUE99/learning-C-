#include <iostream>
using namespace std;
//1.2.1#define����곣�������޸�;�����Ϸ�,���������������
#define nianlin 7
int main()//һ����Ŀֻ����һ��main
{
	cout << "YueYiFan" << endl;//��L����һ
	/*��
	��
	ע
	��*/
	//1.1���������ķ���
	int a = 9;//a�Ǳ�ʶ����10�Ǳ���

	cout << "a=" << a << endl;

	cout << "��" << nianlin << "��" << endl;
	
	//1.2.2const���εı���,���κ�Ϊ�������ܸ���
	const int month = 12;

	cout << "�����Ѿ�" << month << "����";
	
	//1.4��ʶ���������ñ�ʶ���ܴ����������
	int _1d = 30;
	int _1D = 40;
	//1.4����int1D
	cout << _1d << _1D << endl;

	//2.1����;
	long b = 9;
	short c = 9;
	long long d = 9;

	//2.2sizeof
	cout << "shortռ�õ��ڴ�ռ�Ϊ" << sizeof(short) << endl;
	cout << "bռ�õ��ڴ�ռ�Ϊ" << sizeof(b) << endl;

	//2.3ʵ��(Ĭ��С����˫����double;��Ҫ�����ֺ����f�Ա�ʾ������float)
	float f1 = 3.14159268f;

	double d1 = 3.1415926;

	//2.3��ѧ���������
	float f2 = 4e-2;//4��-2�η������0.04
	cout << f2 << endl;
	//2.3�����ʾ��λ��Ч����
	cout << f1 << endl;
	cout << d1 << endl;
	//2.3�鿴ռ�õ��ڴ�ռ�
	cout << sizeof(f1) << endl;//float4��
	cout << sizeof(d1) << endl;//doule8��
	//2.4�ַ���
	char ch = 'Z';//ע�ⴴ���ַ���һ��Ҫ�ǣ������ţ�����������ֻ����һ���ַ�
	cout << ch << endl;
	//�鿴�ַ��͵�ASCII����
	cout << (int)ch << endl;//a��97,z��122,A��65��Z��90

	//2.5ת���ַ�
	cout << "\\" << endl;//Ҫ����\\���һ��
	cout << "aaa\tYYF" << endl;//\t����ʹ������
	cout << "aaaaaa\tYYF" << endl;
	//2.6�ַ�����
	//��C����ַ���
	char str[] = "YUEYIFAN";//�Ⱥ����ʶ��������[]���Ⱥź�˫���ţ����ַ��Ͳ�ͬ��
	cout << str << endl;
	//��C++����ַ���
	string str2 = "YUEYIFAN";
	cout << str2 << endl;

	//2.6������������bool
	bool flag = true;//bool�������ݽṹ����Ϊbool
	cout << flag << endl;//���1��ʾtrueʵ������1

	flag = false;
	cout << flag << endl;//��ʹ����bool��ͷ���壬0Ҳ�����

	cout << sizeof(bool) << endl;//bool��ռ�ڴ�ռ�Ϊ1

	//2.8���ݵ�����
	//2.8.1��������
	int m = 0;
	cout << "��m��ֵ" << endl;
	cin >> m;
	cout << "���ͱ���m=" << m << endl;

	//2.8.2����ʵ�ͣ������ͣ�
	float n = 3.14f;
	cout << "��n��ֵ" << endl;
	cin >> n;
	cout << "�����ͱ���n=" << n << endl;

	//2.8.3�����ַ���
	char cha = 'a';
	cout << "���ַ��ͱ���cha��ֵ" << endl;
	cin >> cha;
	cout << "�ַ��ͱ���cha=" << cha << endl;

	//2.8.4�ַ�����
	string strin = "aha";
	cout << "���ַ�����ֵ" << endl;
	cin >> strin;
	cout << "�ַ����ͱ���strin=" << strin << endl;
	//2.8.5������
	bool boo = true;
	cout << "��bool��ֵ" << endl;
	cin >> boo;
	cout << "boolֵΪ" << boo << endl;



	system("pause");

	return 0;

}
//1.1���������ڿ��ٶ�ȡ�ڴ棻����Ҫ��ͬһ�κ������ظ�����һ������
//1.2���������ڼ�¼�����в��ɸ��ĵ�����
//1.2.1#define�곣����д�����ϣ�1.2.2������const���ڱ���ǰʹ�ñ�����Ϊ����
//1.3�ؼ��֣�C++��Ԥ�ȱ����ĵ��ʣ������������峣����63��:int if return ��
//1.4��ʶ����������:1.�������ǹؼ��֣�2.�����ɢ���ĸ�����֢��»�����ɣ�3.��һ���ַ�����Ϊ��ĸ�����»��ߣ���һ���ַ����������֣�4.���ִ�Сд
// 2.�������ͣ�����������һ�����ʵ��ڴ�ռ�
// 2.1���ͣ���int4�ֽ�+-2^31��short������2�ֽ�+-2^15��long������4�ֽ�+-2^31��long long������8�ֽ�+-2^31
// 2.1���������Χ�����������·�һС����죻short<int<=long<=long long
// 2.2sizeof�ؼ��֣�ͳ������������ռ�ڴ��С
// 2.3ʵ�ͣ���ʾС���ٵ�����float(4���ֽڣ�7λ��Ч����)��˫����double��8�ֽڣ�15-16λ��Ч���֣�
// float��numpy�в�ͬ
// 2.4�ַ���char balabala='a';(��������ֻ�У���һ�������ַ�����ռ��һ���ֽ�
// 2.4�ַ��ͱ�����ת����ASCII�������洢��Ԫ
// 2.5ת���ַ�����ʾ������ʾ������ASCII�ַ���
// \n���У�\\��б��,\tˮƽ�Ʊ��
// 2.6�ַ�����:��C����C++���
// 2.7�������ͣ���1���߼�0
// 2.8���ݵ�����cin

