#include<iostream>
using namespace std;
int add(int x,int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
void main(){
	int res1 = add(5, 8);
	int res2 = sub(20, 10);
	cout << res1 << endl;
	cout << res2 << endl;
}