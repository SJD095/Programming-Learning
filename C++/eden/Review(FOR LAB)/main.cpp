#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class point
{
	public:
		point(string n, int r):name(n), rate(r)
		{
			
		}
		
		friend bool operator<(const point&, const point&);
		friend bool better(point&, point&);
		friend void show(point&);
		
	private:
		string name;
		int rate;
};

bool operator<(const point& a, const point& b)
{
	return a.name < b.name;
}

bool better(point& a, point& b)
{
	return a.rate < b.rate;
}

void show(point& p)
{
	cout << p.rate << " " << p.name << endl;
}
 
int main()
{
	string input;
	int rating;
	vector<point> points;
	
	getline(cin, input);
	if(input == "quit")
	{
		cout << "No entries. Bye" << endl;
		return 0;
	}
	
	cout << input << endl;
	
	while(input != "quit")
	{
		cin >> rating;
		points.push_back(point(input, rating));
		cin.get();
		getline(cin, input);
	}
	
	
	cout << "Thank you. You entered the following " << points.size() << " ratings:\nRating Book" << endl;
	for_each(points.begin(), points.end(), show);
	
	cout << "Sorted by title:\nRating Book" << endl;
	sort(points.begin(), points.end());
	for_each(points.begin(), points.end(), show);
	
	cout << "Sorted by rating:\nRating Book" << endl;
	sort(points.begin(), points.end(), better);
	for_each(points.begin(), points.end(), show);
	
	cout << "Bye" << endl;
}