#include <iostream>
#include <vector>
#include <queue>
#define INF 987654321
using namespace std;
using vii=vector<pair<int,int>>;
using pii=pair<int,int>;

vector<pair<int,int> > node[20005];
priority_queue<pair<int,int>,vii,greater<pii>> pq;
int value[20005],n,e,k,u,v,w;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n>>e;
    cin>>k;
    
    for(int i=0;i<e;i++){
        cin>>u>>v>>w;
        node[u].push_back({v,w});
    }
    
    for(int i=1;i<=n;i++)
        value[i] = INF;
    
    value[k] = 0;
    
    pq.push(make_pair(0,k));
    
    while(!pq.empty()){
        int x = pq.top().first;
        int U = pq.top().second;
        pq.pop();
        
        for(int i=0;i<node[U].size();i++){
            int V = node[U][i].first;
            int W = node[U][i].second;
            
            if(x+W<value[V]){
                value[V] = x+W;
                pq.push({x+W,V});
            }
        }
    }
    
    for(int i=1;i<=n;i++)
        if(value[i]==INF) cout<<"INF\n";
        else cout<<value[i]<<'\n';
    
    return 0;
}
