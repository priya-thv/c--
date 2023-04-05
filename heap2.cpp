#include <bits/stdc++.h>
using namespace std;
 
class maxHeap{
	vector<int>A;
	public:
		maxHeap(vector<int>arr){
            for(int i=1;i<arr.size();i++){
                int child=i;
                int parent=(i-1)/2;
            while(arr[child]>arr[parent]){
                swap(arr[child],arr[parent]);
                child=parent;
                 parent=(child-1)/2;
               }
            }
		}
 
		int top(){
            A[0];
			return 0;
		}
		void pop(){
          A.pop_back();
		  maxHeap(A);

		}
		void insert(int a){
            int end=A.size();
            A[end]=a;
            maxHeap(A);
		}
		int size(){
            int end=A.size();
			return 0;
		} 
		void print(){
			cout<<"\nheap: ";
			for(int a:A){
				cout<<a<<" ";
			}
			cout<<"\n";
		}
};
int main() {
	vector<int>A= {4,2,6,5,8,9,7,6,1,3,10};
	maxHeap heap = maxHeap(A);
 
	cout<<"Top: "<<heap.top()<<"\n";
	heap.pop();
	cout<<"top after pop: "<<heap.top()<<"\n";
	cout<<"size after pop: "<<heap.size()<<"\n";
	heap.insert(12);
	cout<<"top after insert: "<<heap.top()<<"\n";
	heap.print();
	return 0;
}