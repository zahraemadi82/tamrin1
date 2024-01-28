//برنامه ای بنویسید که دو عدد از ورودی دریافت کرده و اعداد اول بین این دو عدد را نمایش دهد   

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int number1;
	cout << "Entere number 1 :";
	cin >> number1;

	int number2;
	cout << "Enter number number 2 :";
	cin >> number2;

	for (int i = number1; i <= number2; i++)
	{
		if (i < 1)
		{
			cout << "End";

		}
		else {

			int sqrtNumber = sqrt(i);
			for (int num = 2; num <= sqrtNumber; num++)
			{
				if (i % num != 0)
				{
					cout << i << "\n";
				}
			}
		}
	}
	return 0;
}







