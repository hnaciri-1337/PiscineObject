#include "Account.hpp"
#include "Bank.hpp"

int     main()
{
	{
		Bank firstBank(500);
		Account  &firstAccount = firstBank.createAccount(70);
		Account  &secondAccount = firstBank.createAccount(100);
		Account  &thirdAccount = firstBank.createAccount(40);
		std::cout << firstBank << std::endl;
		std::cout << "-------------------" << std::endl;



		std::cout << "First Account Transfer(100)" << std::endl;
		firstAccount.makeTransfer(100);
		std::cout << "Second Account Transfer(50)" << std::endl;
		secondAccount.makeTransfer(50);
		std::cout << "Third Account Transfer(60)" << std::endl;
		thirdAccount.makeTransfer(60);
		std::cout << firstBank << std::endl;
		std::cout << "-------------------" << std::endl;



		try {
			std::cout << "First Account Withdrawal(60)" << std::endl;
			firstAccount.makeWithdrawal(60);
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "Second Account Withdrawal(200)" << std::endl;
			secondAccount.makeWithdrawal(200);
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "Third Account Withdrawal(15)" << std::endl;
			thirdAccount.makeWithdrawal(15);
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << firstBank << std::endl;
		std::cout << "-------------------" << std::endl;



		try {
			std::cout << "First Account Ask For(30)" << std::endl;
			firstAccount.askForLoan(30);
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "Second Account Withdrawal(70)" << std::endl;
			secondAccount.askForLoan(70);
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "Third Account Withdrawal(800)" << std::endl;
			thirdAccount.askForLoan(800);
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << firstBank << std::endl;
		std::cout << "-------------------" << std::endl;



		std::cout << "Using [] operator" << std::endl;
		for (int i = 0; i < 4; i++) {
			try {
				std::cout << firstBank[i] << std::endl;
			}
			catch (const std::exception& e) {
				std::cout << e.what() << std::endl;
			}
		}


		std::cout << "-------------------" << std::endl;
		try {
			std::cout << "First Account Delete his account" << std::endl;
			std::cout << "Remaining in 1st account -> " << firstAccount.deleteMyAccount() << std::endl;
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "Third Account Delete his account" << std::endl;
			std::cout << "Remaining in 3rd account -> " << thirdAccount.deleteMyAccount() << std::endl;
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << firstBank << std::endl;
		std::cout << "-------------------" << std::endl;
	}
}