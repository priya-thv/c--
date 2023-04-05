#include <iostream>
using namespace std;

//complete the functions
class Queue{
	int A[100000];
	int start;
	int end;
	
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
		cout<<"constructor is Called\n";
		start=0;
		end=0;
	}
	
	//push the value at the back
	void push(int val){
		A[end]=val;
		end++;
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
	}
	
	int front(){
		A[start];
		cout<<"returning the value at front\n";
		
	}
	
	void pop(){
		start++;
		cout<<"removing the first element\n";
	}
	
	int size(){

		cout<<"return the size of the queue\n";
	   
	}
	
	bool isEmpty(){
	if (end == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        	
	}
};

int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.pus
	 h(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}