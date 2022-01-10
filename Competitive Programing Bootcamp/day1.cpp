#include <bits/stdc++.h>
#pragma GCC optimise("O2")
using namespace std;
#define int long long
#define lf unsigned long float
#define sl(x) scanf("%lld", &l)
#define vi vector<int>
#define vivi vector< vector<int> >
#define vs vector<string>
#define vd vector<double>
#define p(type1, type2) pair<type1, type2>
#define umap(type1, type2) unordered_map<type1, type2>
#define uset(type1) unordered_set<type1>
#define ct (double)(clock() - sTime)/CLOCKS_PER_SEC
#define deb1(x) cout << #x << " : " << x << endl;
#define deb2(x, y) cout << #x << " : " << x << endl << #y << " : " << y << endl;
#define deb3(x, y, z) cout << #x << " : " << x << endl << #y << " : " << y << endl << #z << 
#define endl '\n'
#define el '\n'
#define FF(i, a, n) for(i = a; a < n ? i < n : i >= n; a < n ? i++ : i--)
#define ff(i, a, n) for(int i = a; a < n ? i < n : i >= n; a < n ? i++ : i--)
#define F(i, n) for(i = 0; i < n; i++)
#define f(i, n) for(int i = 0; i < n; i++)
#define fa(a, x) for(const auto &a : x)
#define all(a) a.begin(), a.end()
#define mxar(arr, size) *std::max_element(arr, arr+size)
#define mnar(arr, size) *std::min_element(arr, arr+size)
#define vmx(arr) *std::max_element(&arr[0], &arr[arr.size()])
#define vmn(arr) *std::min_element(&arr[0], &arr[arr.size()])
#define print(x) for(const auto &e: (x)) { cout << e << " "; } cout << endl
#define VTS(v) ({ \
    stringstream ss; \
    for(int i : v){ \
        ss << i << " "; \
    } \
    string s = ss.str(); \
    s; \
})
#define STV(s) ({ \
     stringstream ss(s); \
     vi v; \
     int temp; \
     while(ss >> temp){ \
         v.push_back(temp); \
     } \
     v; \
 })
#define MAX(...) ({ \
    int nos[] = {__VA_ARGS__}; \
    int n = sizeof(nos)/sizeof(nos[0]); \
    *std::max_element(nos, nos+n); \
 })
#define MIN(...) ({ \
    int nos[] = {__VA_ARGS__}; \
    int n = sizeof(nos)/sizeof(nos[0]); \
    *std::min_element(nos, nos+n); \
 })

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    clock_t sTime = clock();

    int t; cin >> t;
    while(t--){

    }
}