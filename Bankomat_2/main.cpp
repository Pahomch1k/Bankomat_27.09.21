#include<iostream>
#include<ctime>

#include"Bankomat.h"

using namespace std;

int main()
{
		setlocale(0, "");
		int vibor;
		int y = 0;

		cout << "Банк - 1 || Клиент - 2" << endl;
		cin >> vibor;
		cin.ignore();

		Bankomat operation;

		if (vibor < 1 || vibor > 2)
			cout << "Выбор не верный " << endl;

		else if (vibor == 1)
		{
			operation.Input_cash_bank();
			operation.Print_obch_sym();
		}

		else
		{
			operation.Card_client_balance();
			operation.Input_passsword();

			cout << "Выбор операции " << endl << "Посмотреть баланс - 1" << endl << "Сменить пин код - 2" << endl << "Cнять нал - 3" << endl << "Пополнить карту - 4" << endl;
			cin >> y;

			if (y == 1)
				operation.Watch_balance();

			else if (y == 2)
				operation.Edit_pin();

			else if (y == 3)
			{
				operation.Output_cash();
				operation.Watch_balance();
			}
			else if (y == 4)
			{
				operation.Input_cash_client();
				operation.Watch_balance();
			}
		}
}