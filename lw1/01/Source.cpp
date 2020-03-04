#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <boost/timer.hpp>

int main()
{
	std::vector<size_t> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::sort(v.begin(), v.end());
	boost::timer t;
	t.restart();
	do
	{
	} while (std::next_permutation(v.begin(), v.end()));
	double duration = t.elapsed();
	std::cout << duration << std::endl;
	return 0;
}