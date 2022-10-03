//115쪽 1번
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sr1, sr2;

	cout << "첫 번째 문자열: ";
	cin >> sr1;
	cout << "두 번째 문자열: ";
	cin >> sr2;

	if (sr1 == sr2)
		cout << "2개의 문자열은 같습니다." << endl;
	else
		cout << "2개의 문자열은 다릅니다." << endl;

	return 0;
}

//117쪽 10번
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

//119쪽 16번
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

	cout << "초기 금액 $" << cash << endl;
	cout << "목표 금액 $" << goal << endl;

	
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

	cout << "1000 중의 " << wins << "번 승리" << endl;
	cout << fixed; 
	cout.precision(6); 
	cout << "이긴 확률=" << wins / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << total / 1000.0 << endl;

	return 0;
}

//160쪽 2번
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

	cout << "반지름을 입력하시오: ";
	cin >> input;

	volume = calc_volume(input);

	cout << "구의 부피는 " << volume << endl;

	return 0;
}

//162쪽 9번
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

	cout << "사용자의 주사위: " << dice1 << "+" << dice2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "사용자가 이겼습니다." << endl;
	else if (result == 2 || result == 3 || result == 12)
		cout << "사용자가 졌습니다." << endl;

	return 0;
}

//164쪽 13번
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

	cout << "암호를 입력하시오: ";
	cin >> pw;

	if (in_Upper(pw) && in_Lower(pw) && in_Number(pw))
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;

	return 0;
}

//353쪽 1번
#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "몇 개의 정수를 입력합니까? ";
	cin >> num;

	int* p = new int[num];

	for (int i = 0; i < num; i++) {
		cout << "정수를 입력하시오 : ";
		cin >> p[i];
	}

	cout << "입력된 정수는: ";
	for (int i = 0; i < num; i++)
		cout << p[i] << ", ";
	cout << endl;

	delete[] p;

	return 0;
}

// 353쪽 2번
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;

	cout << "얼마나 많은 이름을 입력 하시겠습니까? ";
	cin >> num;

	string* names = new string[num];

	for (int i = 0; i < num; i++) {
		cout << "이름 입력 # " << i + 1 << ": ";
		cin >> names[i];
	}
	cout << endl;

	cout << "다음은 이름 목록입니다." << endl;
	for (int i = 0; i < num; i++)
		cout << "이름 #" << i + 1 << ": " << names[i] << endl;

	delete[] names;

	return 0;
}