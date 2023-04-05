//
//  main.cpp
//  7785 회사에 있는 사람
//
//  Created by 최성민 on 2023/04/05.
//


#include <iostream>
#include <map>

using namespace std;

int n;
string name, status;
map <string, string, greater<>> arr;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--){
        cin>>name>>status;
        arr[name]=status;
    }
    for(auto i=arr.begin(); i!=arr.end(); i++){
        if(i->second=="enter"){
            cout<<i->first<<'\n';
            
        }
    }
    return 0;
}
