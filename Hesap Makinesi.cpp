
#include <iostream.h>
#include <conio.h>
#include <limits>
#include <time.h>
#include <windows.h>

void menu_yazdir() {
	cout << "****************************" << endl;
	cout << "Hesap Makinasi Version 1.0"  << endl;
	cout << "Menu :" << endl;
	cout << "(+) Toplama" << endl;
	cout << "(-) Cikarma" << endl;
	cout << "(*) Carpma" << endl;
	cout << "(/) Bolme" << endl;
	cout << "(x) Cikis" << endl;
	cout << "****************************" << endl;
}


int main()
{
	double a=0,b=0;
	char secim=0;

	while(true){
		do {
			menu_yazdir();
			cout<<"Secmek istediginiz islemi giriniz : ";
			cin >> secim;
		} while ( secim != '+' && secim != '-' && secim != '*' && secim != '/' && secim != 'x' );


		if (secim == 'x') {
			cout << "Cikis yapiliyor... " << endl;
			Sleep(3000);
			return 0;
		}
		else {
			cout<<"1.sayiyi giriniz : ";
			cin>>a;
			while (1){
						if (cin.fail())
					 {
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(),'\n');
						cout<<"Yanlis karakter girdiniz. Yeniden giris yapiniz : ";
						cin>>a;
					 }
						if(!cin.fail())
						break;
					 }

			do {
				cout<<"2.sayiyi giriniz : ";
				cin>>b;

			} while (secim == '/' && b == 0);
		}
		while (1){
								if (cin.fail())
								{
									cin.clear();
									cin.ignore(numeric_limits<streamsize>::max(),'\n');
									cout<<"Yanlis karakter girdiniz. Yeniden giris yapiniz : ";
									cin>>b;
								}
								if(!cin.fail())
								break;
				}

		if (secim == '+') {
			cout<< a << " + " << b << " = " << a + b << endl;
		} else if (secim == '-') {
			cout<< a << " - " << b << " = " << a - b << endl;
		} else if (secim == '*') {
			cout<< a << " * " << b << " = " << a * b << endl;
		}else if (secim == '/') {
			cout<< a << " / " << b << " = " << a / b << endl;
		}

	}

	return 0;
}



