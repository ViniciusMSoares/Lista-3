#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    if(b == 0) return a;
    return mdc(b, a%b);
}

int main(){
    int n;
    scanf("%d", &n);
    vector<int> ans;
    for(int i = 1, x; i <= n; i++){
        scanf("%d", &x);
        if(i > 1 && mdc(ans.back(), x) > 1){
            ans.push_back(1);
        }
        ans.push_back(x);
    }
    printf("%d\n", ans.size() - n);
    for(int i = 0; i < ans.size(); i++){
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}
