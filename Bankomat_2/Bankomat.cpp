#include "Bankomat.h"
#include<iostream>
#include<ctime>

using namespace std;

void Bankomat::Print_nominalov()
{
	cout << "��������� ��������:" << endl << "100 ���" << endl << "200 ���" << endl << "500 ���" << endl << "1000 ���" << endl;
}

void Bankomat::Watch_balance()
{
	cout << "��� ������ " << card_client <<endl;
}

void Bankomat::Edit_pin()
{
	int x = 0;
	cout << "����� ��� " << x << endl;
	cin >> x;
	card_client_pin = x;
}

int Bankomat::Print_menu(int y)
{
	cout << "����� �������� " << endl << "���������� ������ - 1" << endl << "������� ��� ��� - 2" << endl << "C���� ��� - 3" << endl << "��������� ����� - 4" << endl;
	cin >> y;
	return y;
}

void Bankomat::Print_obch_sym()
{
	cout << "����� ����� � ���������: " << obch_symma << endl;
}

void Bankomat::Output_cash()
{
	cout << "������� ����� ?" << endl;
	cin >> skolko_snyat;

	if (skolko_snyat < min_symma_den || skolko_snyat > max_symma_den)
		cout << "����� �� ��������. ������� ��� ���" << endl;

	else if (skolko_snyat > card_client)
		cout << "� ��� ������������ �����" << endl;

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
	cout << "������� ���" << endl;
	int pin;
	cin >> pin;
	if (pin == card_client_pin)
		cout << "�� �����" << endl;

	else
		exit(0);
}

void Bankomat::Input_cash_bank()
{
	cout << "������� �������� ?" << endl;
	cin >> skolko_polog;

	if (skolko_polog < min_obch_symma || skolko_polog > max_obch_symma)
		cout << "����� �� ��������. ������� ��� ���" << endl;

	else
		obch_symma += skolko_polog;
}

void Bankomat::Input_cash_client()
{
	cout << "������� �������� ?" << endl;
	cin >> skolko_polog;

	if (skolko_polog < min_obch_symma || skolko_polog > max_obch_symma)
		cout << "����� �� ��������. ������� ��� ���" << endl;

	else
	{
		obch_symma += skolko_polog;
		card_client += skolko_polog;
	}
}

