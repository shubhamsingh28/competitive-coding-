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
struct Node{
	ll data;
	ll hd;
	Node * left,*right;
	Node(ll val){
		data=val;
		hd=INT_MAX;
		left=NULL;
		right=NULL;
	}
};
void topView(Node* root){
	if(root==NULL){
		return ;
	}
	map<ll,ll>mp;
	ll hd=0;
	queue<Node*>q;
	q.push(root);
	root->hd=0;
	while(!q.empty()){
		Node* temp=q.front();
		q.pop();
		hd=temp->hd;
		if(mp[hd]==0){
			mp[hd]=temp->data;
		}
		if(temp->left!=NULL){
			temp->left->hd=hd-1;
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
	}
	map<ll,ll>::iterator it;
	for(it=mp.begin();it!=mp.end();it++){
		cout<<it->second<<endl;
	}
}
int main(){
	faster;
	Node *root=new Node(20);
	root->left=new Node(8);
        root->right=new Node(22);
        root->left->left=new Node(5);
        root->left->right=new Node(3);
        root->right->left=new Node(4);
        root->right->right=new Node(25);
        root->left->right->left=new Node(10);
        root->left->right->right=new Node(14);
        topView(root);
        return 0;
} 
