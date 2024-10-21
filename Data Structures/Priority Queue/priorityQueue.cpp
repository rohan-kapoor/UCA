#include <bits/stdc++.h>
using namespace std;

class max_heap{
	private:
		vector<int> pq;
		
		void swim(int k){
			while(k > 1 && pq[k] > pq[k/2]){
				swap(pq[k], pq[k/2]);
				k/=2;
			}
		}
		
		void sink(int k){
			int n = pq.size() - 1;
			while(2*k <= n){
				int j = 2*k;
				if(j < n && pq[j] < pq[j+1]) j++;
				if(pq[j] <= pq[k]) break;
				swap(pq[k], pq[j]);
				k = j;
			}
		}
	
	public:
		max_heap(){
			pq.push_back(-1);
		}
		
		bool isEmpty(){
			return pq.size() == 1;
		}
		
		int size(){
			return pq.size() - 1;
		}
		
		void push(int val){
			pq.push_back(val);
			swim(pq.size() - 1);
		}
		
		int pop(){
			if(isEmpty()){
				cout << "Heap is already empty";
				return -1;
			}
			int val = pq[1];
			swap(pq[1], pq[pq.size() - 1]);
			pq.pop_back();
			sink(1);
			return val;
		}		
};

int main(){
	max_heap mh = max_heap();
	mh.push(6);
	mh.push(4);
	mh.push(9);
	mh.push(1);
	mh.push(3);
	cout << mh.pop() << endl;
	cout << mh.pop() << endl;
	cout << mh.pop() << endl;
	cout << mh.pop() << endl;
	cout << mh.pop() << endl;

}