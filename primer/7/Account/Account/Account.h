#pragma once
#include <iostream>
#include <string>

class Account
{
public:
	void print();
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
	Account(const std::string &s, double a) : owner(s), amount(a) {};
	Account() = default;
private:
	std::string owner;
	double amount;
	static double interestRate;	// static double initRate();
};

double Account::interestRate = 0;

void Account::print()
{
	std::cout << "Owner: " << owner << std::endl;
	std::cout << "Amount: " << amount << std::endl;
	std::cout << "InRate: " << Account::interestRate << std::endl;
}

void Account::rate(double newRate)
{
	interestRate = newRate;
}