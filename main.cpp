#include <iostream>
#include <random>
#include <chrono>
#include "Heap.hpp"

using namespace std;

int main() {
	default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
	uniform_int_distribution<int> distribution(0,100);
	Heap<int> heap;
	while(heap.size()!=10)
		heap.push(distribution(generator));
	while(!heap.empty()) {
		cout << heap.top() << " " ;
		heap.pop();
	}
	cout << endl;
	return 0;
}