#include <memory>
#include <iostream>

using namespace std;

shared_ptr<int> sharedPoint(int n) {

	cout << "�Է¹��� ���ڴ� " << n;
	return make_shared<int>(n);
}