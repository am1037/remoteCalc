#include <memory>
#include <iostream>

using namespace std;

shared_ptr<int> sharedPoint(int n) {

	cout << "입력받은 숫자는 " << n;
	return make_shared<int>(n);
}