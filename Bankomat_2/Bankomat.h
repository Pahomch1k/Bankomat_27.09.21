#pragma once

class Bankomat
{
	int Number_b;
	int obch_symma = 1655000;
	int max_obch_symma = 2000000;
	int min_obch_symma = 0;
	int min_symma_den = 50;
	int max_symma_den = 200000;
	int skolko_snyat;
	int skolko_polog;
	int card_client = 10000;
	int card_client_pin = 1234;
public:

	void Output_cash();
	void Card_client_balance();
	void Input_passsword();
	void Print_nominalov();
	void Watch_balance();
	void Edit_pin();
	int Print_menu(int y);
	void Print_obch_sym();
	void Input_cash_bank();
	void Input_cash_client();

};


