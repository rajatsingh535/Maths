#include <iostream>
using namespace std;


int main()
{
    int n; cin >> n;

    int cnt = 0;

    while(n > 0){
        int last_digit = n % 10;
        if(last_digit % 2 == 1) cnt++;
        n = n / 10;
    }

    cout << cnt;
    return 0;
}
