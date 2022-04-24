#include <bits/stdc++.h>
using namespace std;
int A[10];
int top=-1;
void push(int val){
    top++;
    A[top]=val;
}
void pop(){
    int item=A[top];
    top--;
    cout<<item<<" poped\n";
}
bool isEmpty(){
    if(top<0)   return true;
    else    return false;
}
int isTop()
{
    if(top==-1) return -1;
    else    return A[top];
}
void print(){
    for(int i=0; i<=top; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main() {
	push(10);
	push(20);
	print();
	pop();
	cout<<isTop()<<"\n";
	push(30);
	pop();
	pop();
	cout<<isEmpty()<<"\n";
	return 0;
}
