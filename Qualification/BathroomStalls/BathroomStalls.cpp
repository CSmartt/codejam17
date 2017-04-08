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
		bathroomStall(int n, int k);
		~bathroomStall();
};

bathroomStall::bathroomStall(int n, int k)
	:data (new int[N+2])	{
	memset(data, 0, sizeof(data));
	data[0] = 1;
	data[N+2] = 1;
	N = n;
	K = k;
}

bathroomStall::~bathroomStall() {
	delete[]  data;
}

int main() {
	int cases, N[cases], K[cases];
	cin >> cases;
	for(int i = 1; i < 100; ++i) cin >> N[i] >> K[i];
	vector<bathroomStall> bathrooms;
	for(int i = 1; i <= cases; i++) {
		bathroomStall Stall(N[i], K[i]);
		bathrooms.push_back(Stall);
	}
	return 0;
}
