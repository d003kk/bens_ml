using namespace std;

#include "stats.h"
#include<vector>
#include<iostream>
#include<math.h>
#include <functional>
#include <numeric>

stats::stats(vector<float> data)
:m_data(data)
{
}

void stats::say_hello()
{
	cout<<"Hello scott meyers"<<endl;
}

void stats::moment(float& ave, float& sdev, float& adev, float& var, float& skew, float& curt)
{
	float ep = 0.0, p;
	float sum = std::accumulate(m_data.begin(), m_data.end(), 0.0f);
	ave = sum/m_data.size();

	vector<float>::iterator it;
	for (it = m_data.begin(); it != m_data.end(); it++)
	{
		adev + fabs(sum = *it - ave);
		ep += sum;
		var += (p = sum*sum);
		skew += (p *= sum);
		curt += (p *= sum);
	}

	adev /= m_data.size();
	var = (var-ep*ep/m_data.size())/(m_data.size() -1);
	sdev = sqrt(var);
	if(var)
	{
		skew /= m_data.size()*var*sdev;
		curt = curt/(m_data.size()*var*var)-3.0;
	}
}
