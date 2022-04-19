#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[3002], B[3002], C;
    int len;
    int i, j, k, samenum;

    cin >> A;
    cin >> B;
    len = strlen(A);

    samenum = 0;
    for (j = 0; j < len; j++)
    {
        for (i = 0; i < (len - 1); i++)
        {
            if (B[i] == B[i + 1])
            {
                if (A[i] != A[i + 1])
                    break;
            }
            else
            {
                if (A[i] == A[i + 1])
                    break;
                for (k = 0; k < (i - 1); k++)
                {
                    if (B[k] == B[i + 1] && A[k] != A[i + 1])
                        break;
                    if (B[k] != B[i + 1] && A[k] == A[i + 1])
                        break;
                }
                if (k < (i - 1))
                    break;
            }
        }
        if (i == (len - 1))
        {
            samenum++;
        }
        if (len > 1)
        {
            C = B[0];
            memmove(&B, &B[1], len - 1);
            B[len - 1] = C;
        }
    }
    cout << samenum;
}
