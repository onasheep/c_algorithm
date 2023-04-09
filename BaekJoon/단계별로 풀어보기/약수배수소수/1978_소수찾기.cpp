#include <iostream>
#include <vector>
#include <cmath>  
using namespace std;

bool isPrime(int num) {
	if (num <= 1) {
		return false;  
	}
	int sqrtNum = sqrt(num); 
	for (int i = 2; i <= sqrtNum; i++) {
		if (num % i == 0) {
			return false;  
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a;
	int count = 0;
	vector<int> nums;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		nums.push_back(a);
	}

	for (int i = 0; i < nums.size(); i++) {
		if (isPrime(nums[i])) {
			count++;
		}
	}

	cout << count;

	return 0;
}