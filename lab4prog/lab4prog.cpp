#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Trapezoid.h"

using namespace std;
using namespace lab;

int main()
{
	vector<BaseCForm*> arr;
	auto r = new Rectangle;
	r->initFromDialog();
	auto t = new Trapezoid;
	t->initFromDialog();

	arr.push_back(r);
	arr.push_back(t);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i]->classname() << endl;
		arr[i]->draw();
		cout << endl;
		cout << arr[i]->perimeter() << endl;
		cout << arr[i]->size() << endl;
		cout << arr[i]->square() << endl;
		cout << arr[i]->mass() << endl;
		cout << endl;
	}
	cout << endl;
	if (arr[0] < arr[1]) cout << "YES";
	else cout << "NO";

	return 0;
}