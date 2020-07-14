using namespace std;

#include "stats.h"
#include<vector>
#include<iostream>

stats::stats(vector<float> data)
:m_data(data)
{
}

void stats::say_hello()
{
	cout<<"Hello scott meyers"<<endl;
}
