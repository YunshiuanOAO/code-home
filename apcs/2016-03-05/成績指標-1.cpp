#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, i, j, tmp, maxnum, minnum, a, b;
    int *p;
    while (cin >> N) {
        p = new int[N];
        for (i = 0; i < N; i++)cin >> p[i];

        for (j = N; j > 1; j--) {
            for (i = 0; i < j - 1; i++) {
                if (p[i] > p[i + 1]) {
                    tmp = p[i];
                    p[i] = p[i + 1];
                    p[i + 1] = tmp;
                }
            }
        }
        a = p[0];
        b = p[N - 1];
        for (i = 0; i < N - 1; i++)cout << p[i] << " ";
        cout << p[N - 1] << endl;
        maxnum = 0;
        minnum = p[N - 1];
        for (i = 0; i < N; i++) {
            if (p[i] > maxnum && p[i] < 60)maxnum = p[i];
            if (p[i] < minnum && p[i] >= 60)minnum = p[i];
        }
        if (a >= 60)cout << "best case" << endl;
        if (a < 60)cout << maxnum << endl;
        if (b < 60)cout << "worst case" << endl;
        if (b >= 60) cout << minnum << endl;
    }
}
