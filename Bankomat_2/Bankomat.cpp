#include "Bankomat.h"
#include<iostream>
#include<ctime>

using namespace std;

void Bankomat::Print_nominalov()
{
	cout << "Доступные номиналы:" << endl << "100 грн" << endl << "200 грн" << endl << "500 грн" << endl << "1000 грн" << endl;
}

void Bankomat::Watch_balance()
{
	cout << "Ваш баланс " << card_client <<endl;
}

void Bankomat::Edit_pin()
{
	int x = 0;
	cout << "Новый пин " << x << endl;
	cin >> x;
	card_client_pin = x;
}

int Bankomat::Print_menu(int y)
{
	cout << "Выбор операции " << endl << "Посмотреть баланс - 1" << endl << "Сменить пин код - 2" << endl << "Cнять нал - 3" << endl << "Пополнить карту - 4" << endl;
	cin >> y;
	return y;
}

void Bankomat::Print_obch_sym()
{
	cout << "Общая сумма в банкомате: " << obch_symma << endl;
}

void Bankomat::Output_cash()
{
	cout << "Сколько снять ?" << endl;
	cin >> skolko_snyat;

	if (skolko_snyat < min_symma_den || skolko_snyat > max_symma_den)
		cout << "Сумма не коректна. Введите еще раз" << endl;

	else if (skolko_snyat > card_client)
		cout << "У вас недостаточно денег" << endl;

	else
		obch_symma -= skolko_snyat;
}

void Bankomat::Card_client_balance()
{
	srand(time(0));
	card_client = rand() % 100000;
}

void Bankomat::Input_passsword()
{
	cout << "Введите пин" << endl;
	int pin;
	cin >> pin;
	if (pin == card_client_pin)
		cout << "Вы вошли" << endl;

	else
		exit(0);
}

void Bankomat::Input_cash_bank()
{
	cout << "Сколько положить ?" << endl;
	cin >> skolko_polog;

	if (skolko_polog < min_obch_symma || skolko_polog > max_obch_symma)
		cout << "Сумма не коректна. Введите еще раз" << endl;

	else
		obch_symma += skolko_polog;
}

void Bankomat::Input_cash_client()
{
	cout << "Сколько положить ?" << endl;
	cin >> skolko_polog;

	if (skolko_polog < min_obch_symma || skolko_polog > max_obch_symma)
		cout << "Сумма не коректна. Введите еще раз" << endl;

	else
	{
		obch_symma += skolko_polog;
		card_client += skolko_polog;
	}
}

