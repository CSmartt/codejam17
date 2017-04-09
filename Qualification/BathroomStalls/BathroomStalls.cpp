#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

class bathroomStall{
	public:
		int N, K;
		int* data;
		bathroomStall();
		~bathroomStall();
};

bathroomStall::bathroomStall()
	:data (new int[N])	{
	memset(data, 0, sizeof(data));
	data[0] = 1;
	data[N+2] = 1;
}

bathroomStall::~bathroomStall() {
	delete[]  data;
}

int main() {
	int cases, N[cases], K[cases];
	cin >> cases; 
	for(int i = 1; i <= cases; ++i) {
		cin >> N[i] >> K[i];
	}
	return 0;
}
