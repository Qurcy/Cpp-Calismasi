#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int i, kart[16], say = 0, toplam = 0;
	char kn;

	cout << "Kart numarasını giriniz:"; //boşluk önemsizdir//

	while (true)
	{
		cin >> kn;
		if (kn >= '0' && kn <= '9')
		{
			kart[say] = kn - '0';
			say++;
		}

		else
			cout << "Hatalı karakter girdiniz";
		if (say == 16) break;

	}

	for (i = 0; i < 16; i += 2)
	{
		kart[i] = kart[i] * 2;
		if (kart[i] > 9)
			kart[i] = kart[i] % 10 + kart[i] / 10;
	}

	for (i = 0; i < 16; i++)
	{
		toplam += kart[i];
	}

	if (toplam % 10 == 0)
		cout << "Numara geçerlidir";
	else
		cout << "Numara geçersizdir";
	return 0;

}


