#include <vector>
#include <algorithm>

using namespace std;

class ExpandedVector : public vector<int>
{
	public:
		void my_reverse()
		{
			reverse(this -> begin(), this -> end());
		}
};