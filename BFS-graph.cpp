#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int v,e;
	cin>>v>>e;
	vector<int>V[v];
	for(int i=0;i<e;i++){
	    int x,y;
	    cin>>x>>y;
	    V[x].push_back(y);
	    V[y].push_back(x);
	}
	//start of BFS
	int visited[v]={0};
	queue<int>q;
	q.push(0);
	visited[0]=1;
	while(!q.empty()){
	    int t=q.front();
	    q.pop();
	    cout<<t<<endl;
	    for(auto it=V[t].begin();it!=V[t].end();it++){
	        if(visited[*it]==0){
	            q.push(*it);
	           visited[*it]=1;
	        }
	    }
	    
	}

	return 0;
}

