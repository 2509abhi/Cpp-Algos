#include <bits/stdc++.h>
using namespace std;
//function for genration of nth term pascal's triangle
void generateNthrow(int N)
{
    int prev = 1;
    if (N != 1)
    {
        cout << prev;
    }
    else
    {

        cout << prev;
        return;
    }
    for (int i = 1; i <= N; i++)
    {
        int curr = (prev * (N - i + 1)) / i;
        cout << ", " << curr;
        prev = curr;
    }
}

int main()
{
    int N;
	cout << "Enter nth term: ";
    cin >> N;
	//genrate nth pascal's triangle
    generateNthrow(N);
    return 0;
}
