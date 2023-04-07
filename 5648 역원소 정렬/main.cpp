//
//  main.cpp
//  BaekJoon_mn
//
//  Created by 최성민 on 2023/04/05.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>

typedef long long ll;

using namespace std;

ll rev(ll n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return atoll(s.c_str());
}
// 정수형(to_string 함수 활용) - 문자형(long long)으로 변환(atoll 함수 사용), 뒤집기(reverse 함수 사용)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, i, cnt = 0;
    ll k;
    vector<ll> arr;
    // n의 범위1~10^6 - int , 입력받는 정수(k)의 범위 1~10^12 - long long

    cin >> n;
    
    for (i = 0; i < n; i++) {
        cin >> k;
        k = rev(k);
        arr.push_back(k);
        //n회 정수 입력과 동시에 rev 적용하여 벡터에 저장하기
    }

    sort(arr.begin(), arr.end());
    //sort 함수로 arr 오름차순 정렬

    i = 0;
    
    for (i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }
    //출력

    return 0;
}
