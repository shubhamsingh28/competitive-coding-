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

struct Trie{
 	struct Trie *child[26];
 	bool isLast; 
};
struct Trie *getNode(){
	struct Trie *p=new Trie;
	p->isLast=false;
	for(int i=0;i<26;i++){
		p->child[i]=NULL;
	}
	return p;
}
void insert(struct Trie *root,string s){
	struct Trie *p=root;
	for(int i=0;i<s.length();i++){
		int index=s[i]-'a';
		if(!p->child[index])
			p->child[index]=getNode();
		p=p->child[index];
	}
	p->isLast=true;
}
bool search(struct Trie *root,string key){
	struct Trie *p=root;
	for(int i=0;i<key.length();i++){
		int index=key[i]-'a';
		if(!p->child[index])
			return false;
		p=p->child[index];
	}
	return (p!=NULL && p->isLast);
}
int main(){
	faster;
	 string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);
 
    struct Trie *root = getNode();
 
    // Construct trie
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
 
    // Search for different keys
    search(root, "the")? cout << "Yes\n" :
                         cout << "No\n";
    search(root, "these")? cout << "Yes\n" :
                           cout << "No\n";
    return 0;
} 
