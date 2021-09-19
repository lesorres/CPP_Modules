#include <iostream>
#include <cmath>
#include <sstream>

int main ()
{
	// int		i = 0;
	// float	f[14];
	// // double	f[12];

	// f[0] = .5;
	// f[1] = 5.;
	// f[2] = 0.5;
	// f[3] = 5.00;
	// f[4] = 0.;
	// f[5] = .0;

	// f[6] = .5f;
	// f[7] = 5.;
	// f[8] = 0.5f;
	// f[9] = 5.00f;
	// f[10] = 0.f;
	// f[11] = .0f;
	// f[12] = -2147483648;
	// f[13] = -2147483647;

	// while (i < 14)
	// 	std::cout << f[i++] << "\n";

	// char c = static_cast<char> (255);
	// // char i = static_cast<int> ('€');
	// std::cout << c << "\n";
	// // std::cout << i << "\n";
	// std::cout << "ÿ" << "\n";

	// int i_min = std::numeric_limits<int>::min();
	// int i_max = std::numeric_limits<int>::max();
	// float f_min = std::numeric_limits<float>::min();
	// float f_max = std::numeric_limits<float>::max();
	// double d_min = std::numeric_limits<	double>::min();
	// double d_max = std::numeric_limits<	double>::max();
	// std::cout << i_min << "\n";
	// std::cout << i_max << "\n";
	// std::cout << f_min << "\n";
	// std::cout << f_max << "\n";
	// std::cout << d_min << "\n";
	// std::cout << d_max << "\n";

	double n;
	std::stringstream ss;
	ss << "5.5";
	ss >> n;
	std::cout << n;

	return (0);
}