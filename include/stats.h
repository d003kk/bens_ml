using namespace std;


#include<vector>

class stats
{
	public:
	stats(vector<float> data);
	void say_hello();
	void moment(float& ave, float& sdev, float& adev, float& var, float& skew, float& curt);


	private:
	vector<float> m_data;

};
