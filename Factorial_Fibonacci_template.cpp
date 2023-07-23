
#include <iostream>

//factorial
template <typename unsigned int num>
struct factorial
{
	static const unsigned int val_fact = num * factorial<num - 1>::val_fact;
};

template <>
struct factorial<0>
{
	static const unsigned int val_fact = 1;
};

//fibonacci
template <typename unsigned int index>
struct fibonacci
{
	static const unsigned val_fibo = fibonacci<index - 2>::val_fibo +fibonacci<index - 1>::val_fibo;
};

template <>	//index 0
struct fibonacci<0>
{
	static const unsigned int val_fibo = 1;
};

template <>	//index 1
struct fibonacci<1>
{
	static const unsigned int val_fibo = 1;
};

int main()
{
	const unsigned int n = 5;
	std::cout << "factorial " << factorial<n>::val_fact << std::endl;
	
	const unsigned int i = 7;
	std::cout << "fibonacci " << fibonacci<i>::val_fibo << std::endl;

	return 0;
}
