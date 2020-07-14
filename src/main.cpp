/** 
 * This is an example file to link with autotools 
 * More documentation can be found in README.md
 * ----------------------------------------------
 * Build with:
 * $ clang++ -Wall -std=c++11 -gdwarf-2 -fPIC -I/usr/local/include -c main.cpp
 * Link with:
 * $ clang++ main.o -o main -lautotools
 * Execute:
 * ./main
 */

#include <stats.h>
using namespace std;

int main(int args, char** argv)
{
	vector<float> data;
	data.push_back(1.0);
	data.push_back(1.0);
	stats my_stats(data);
	my_stats.say_hello();

	return 0;
}
