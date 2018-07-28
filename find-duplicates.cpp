/*
My code is my code ,none of your code!! bitch
*/ 
#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long int 
#define fr(i,a,b)  for(long long int i=a; i<b; i++)
#define rfr(i,a,b) for(long long int i=a; i>=b; i--)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ull unsigned long long int
#define inf INT_MAX
#define pb push_back
#define mp make_pair
#define pll pair<long long int,long long int>
#define ld long double
using namespace std;
template<typename T>T gcd(T x, T y) { if (y == 0)return x; else return gcd(y, x%y); }
string qw="abcdefghijklmnopqrstuvwxyz";
int findDupli(int a[]){
	int slow=a[0];
	int fast=a[0];
	do{
		slow=a[slow];
		fast=a[a[fast]];
	}while(slow!=fast);
	int p1=a[0];
	int p2=slow;
	while(p1!=p2){
		p1=a[p1];
		p2=a[p2];
	}
	return p1;
	
}

int main(){
	faster;
	int arr[]={1,2,3,4,3};
	cout<<findDupli(arr);
} 
