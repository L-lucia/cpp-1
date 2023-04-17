#include <iostream>

using namespace std;


int main()
{
	int menu = 0;
	int min;
	int max;
	int result;

	while (true)
	{
		cout << "최소 값을 입력해주세요" << endl;
		cin >> min;

		cout << "최대 값을 입력해주세요" << endl;
		cin >> max;

		cout << "=============================================" << endl;
		cout << "======1.최소~ 최대값의 합을 출력 ============" << endl;
		cout << "======2.최소~ 최대값의 곱을 출력 ============" << endl;
		cout << "======3.최소~ 최대값 중 홀수의 합을 출력=====" << endl;
		cout << "======4.최소~ 최대값 중 짝수를 출력==========" << endl;
		cout << "=============================================" << endl;
		cout << "======0.프로그램 종료========================" << endl;
		cout << "=============================================" << endl;
		cin >> menu;

		result = 0;
		switch (menu)
		{
		case 0:
			return 0;

		case 1:
			for (int i = min; i <= max; i++)
			{
				result += i;
			}
			cout << "최소~최대값의 합은 " << result << endl;
			break;

		case 2:
			result = 1;
			for (int i = min; i <= max; i++)
			{
				result *= i;
			}
			cout << "최소~최대값의 곱은 " << result << endl;
			break;

		case 3:
			for (int i = min; i <= max; i++)
			{
				if (i % 2 == 1)
				{
					result += i;
					continue;
				}
			}
			cout << "최소~ 최대값 중 홀수의 합은 " << result << endl;
			break;

		case 4:
			cout << "최소~최대값 중 짝수는 " << endl;
			for (int i = min; i <= max; i++)
			{
				if (i % 2 == 0)
				{
					cout << i << endl;
				}
			}
			break;

		default:
			cout << "잘못선택하셨습니다." << endl;
			break;
		}

	}




}

