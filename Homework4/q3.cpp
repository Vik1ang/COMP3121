#include <cstddef>
#include <iostream>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << rand() % 10 + 1 << " ";
		}
		cout << endl;
	}
}
