//115�� 1��
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sr1, sr2;

	cout << "ù ��° ���ڿ�: ";
	cin >> sr1;
	cout << "�� ��° ���ڿ�: ";
	cin >> sr2;

	if (sr1 == sr2)
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;

	return 0;
}

//117�� 10��
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	for (int a = 1; a < 100; a++)
		for (int b = 1; b < 100; b++)
			for (int c = 1; c < 100; c++)
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
					cout << a << " " << b << " " << c << endl;

	return 0;
}

//119�� 16��
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int cash = 50;
	const int goal = 250;

	int bets, win; 
	bool result; 
	int wins = 0; 
	int total = 0; 

	srand((unsigned int)time(NULL));

	cout << "�ʱ� �ݾ� $" << cash << endl;
	cout << "��ǥ �ݾ� $" << goal << endl;

	
	for (int game = 0; game < 1000; game++)
	{
		cash = 50, bets = 0, win = 0; 
		while (true)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
			{
				cash++;
				win++;
			}
			else
				cash--;

			if (cash <= 0)
			{
				result = false;
				break;
			}
			if (cash >= goal)
			{
				result = true;
				break;
			}
		}

		if (result == true)
			wins++; 
		total += bets; 
	}

	cout << "1000 ���� " << wins << "�� �¸�" << endl;
	cout << fixed; 
	cout.precision(6); 
	cout << "�̱� Ȯ��=" << wins / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << total / 1000.0 << endl;

	return 0;
}

//160�� 2��
#include <iostream>
#include <math.h>

using namespace std;

inline double calc_volume(double radius)
{
	double result;
	result = (4.0 / 3.0 * 3.14 * pow(radius, 3));
	return result;
}

int main()
{
	double input, volume;

	cout << "�������� �Է��Ͻÿ�: ";
	cin >> input;

	volume = calc_volume(input);

	cout << "���� ���Ǵ� " << volume << endl;

	return 0;
}

//162�� 9��
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int dice1, dice2;
	int result;

	srand((unsigned int)time(NULL));

	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	result = dice1 + dice2;

	cout << "������� �ֻ���: " << dice1 << "+" << dice2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "����ڰ� �̰���ϴ�." << endl;
	else if (result == 2 || result == 3 || result == 12)
		cout << "����ڰ� �����ϴ�." << endl;

	return 0;
}

//164�� 13��
#include <iostream>
#include <string>

using namespace std;

bool in_Upper(string str)
{
	for (auto& c : str)
		if (isupper(c))
			return true;
	return false;
}

bool in_Lower(string str)
{
	for (auto& c : str)
		if (islower(c))
			return true;
	return false;
}

bool in_Number(string str)
{
	for (auto& c : str)
		if (48 <= c && c <= 57)
			return true;
	return false;
}

int main()
{
	string pw;

	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> pw;

	if (in_Upper(pw) && in_Lower(pw) && in_Number(pw))
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl;

	return 0;
}

//353�� 1��
#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> num;

	int* p = new int[num];

	for (int i = 0; i < num; i++) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> p[i];
	}

	cout << "�Էµ� ������: ";
	for (int i = 0; i < num; i++)
		cout << p[i] << ", ";
	cout << endl;

	delete[] p;

	return 0;
}

// 353�� 2��
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;

	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> num;

	string* names = new string[num];

	for (int i = 0; i < num; i++) {
		cout << "�̸� �Է� # " << i + 1 << ": ";
		cin >> names[i];
	}
	cout << endl;

	cout << "������ �̸� ����Դϴ�." << endl;
	for (int i = 0; i < num; i++)
		cout << "�̸� #" << i + 1 << ": " << names[i] << endl;

	delete[] names;

	return 0;
}