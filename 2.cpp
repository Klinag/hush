 #include <iostream>

using namespace std;
int main()
{
    long long n, ch, maxCh;
    bool flag1 = true, flag2 = true;

    cin >>  n;

    if (n <= 0)
        cout << -1;

    else
    {

        if (cin >> n)
        {

            if (cin >> ch)
                maxCh = ch;
            else
            {
                cout << -1;
                flag1 = false;
            }

            if (flag1)
            {
                for (int i = 0; i < n-1; ++i)
                {
                    if (ch > maxCh)
                        maxCh = ch;

                    if (cin >> ch)
                        maxCh = ch;

                    else
                        flag2 = false;
                }

                if (flag2)
                    cout << maxCh;

                else
                    cout << -1;
            }
        }
        else
            cout << -1;

    }

    return 0;
}
