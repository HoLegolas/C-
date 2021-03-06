#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

class Sales_data {
	friend class Window_mgr;
	// friend declarations for nonmember Sales_data operations added
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::istream &read(std::istream&, Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);
public:
	// constructors added
	Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) {};
	Sales_data() : Sales_data("", 0, 0) {}; // delegating construtor
	Sales_data(const std::string &s) : bookNo(s) {};
	Sales_data(std::istream &is) : Sales_data() { read(is, *this); }
	// operation on Sales_data object
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
private:
	inline double avg_price() const
	{
		return units_sold ? revenue / units_sold : 0;
	};
	// data members
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

// combine() function
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
// nonmember Sales_data interface functions
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

std::istream &read(std::istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

#endif