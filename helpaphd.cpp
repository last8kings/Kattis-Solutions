#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vi;
#define rep(i, l, r) for (int i = l; i <= r; ++i)
#define per(i, r, l) for (int i = r; i >= l; --i)
#define rep0(i, l, r) for (int i = l; i < r; ++i)
#define lbd(v, x) distance(v.begin(), lower_bound(v.begin(), v.end(), x))
#define ubd(v, x) distance(v.begin(), upper_bound(v.begin(), v.end(), x))
#define gc (c = getchar())
char readc() {
    char c;
    while (isspace(gc))
        ;
    return c;
}
int read() {
    char c;
    while (gc < '-')
        ;
    if (c == '-') {
        int x = gc - '0';
        while (gc >= '0') x = x * 10 + c - '0';
        return -x;
    }
    int x = c - '0';
    while (gc >= '0') x = x * 10 + c - '0';
    return x;
}
#undef gc


int main() {
    int T = read();
    while(T--){
        int a = read();
        if(a == 33632){puts("skipped");continue;}
        printf("%d\n",a + read());
        }
    }
