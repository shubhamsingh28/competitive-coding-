//https://practice.geeksforgeeks.org/problems/bleak-numbers/0/?track=SP-Bit%20Magic
#include <iostream>
using namespace std;
int A[100001];
int bit_count(int n){
    int c=0;
    while(n){
        if(n%2==1){
            c++;
        }
        n/=2;
    }
    return c;
}
void f(){
    for(int i=0;i<100001;i++){
        if(i+bit_count(i)<100001){
            A[i+bit_count(i)]=1;
        }
    }
}
int main() {
	//code
	f();
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<abs(1-A[n])<<endl;
	}
	return 0;
}
