#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define LL long long
LL bigMod (LL b, LL p)
{
    if ( p == 0 ) return 1;
    if ( p == 1 ) return b;

    if ( p % 2 == 0 ) {
        LL x = bigMod (b, p / 2) % MOD;
        return (x * x) % MOD;
    }
    else
        return (bigMod (b, p - 1) % MOD) * (b % MOD);
}


int main ()
{
    int testCase;
    scanf ("%d", &testCase);
    int cases = 0;

    while ( testCase-- ) {
        int n;
        scanf ("%d", &n);

        printf ("Case #%d: ", ++cases);
        cout << ((bigMod (2, n - 1) * (n % MOD)) % MOD) << endl;
    }

    return 0;
}
