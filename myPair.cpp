#include<iostream>

template<typename T, typename U>
struct myPair
{
	myPair() = default;
	myPair(T argFirst, U argSecond) :first{ argFirst }, second{ argSecond } {}

	T first;
	U second;
};

int main()
{
	myPair <std::string, double> product0;                                     // default constructor
	myPair <std::string, double> product1(std::string("lightbulbs"), 0.99);   // value init            
	myPair <std::string, double> product2("tomatoes", 2.30);                 // value init
	myPair <std::string, double> product3(product2);                        // copy constructor



	product2.first = "shoes";                  // the type of first is string
	product2.second = 39.90;                   // the type of second is double

	std::cout << "The price of " << product1.first << " is $" << product1.second << '\n';
	std::cout << "The price of " << product2.first << " is $" << product2.second << '\n';
	std::cout << "The price of " << product3.first << " is $" << product3.second << '\n';
	return 0;
}