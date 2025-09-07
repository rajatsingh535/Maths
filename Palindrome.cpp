#include <iostream>
using namespace std;

bool isPalindrome(int n) {
        int original = n;
        if(n < 0) return false;

        int rev = 0;

        while(n > 0){
            int last = n % 10;
            rev = rev * 10 + last;
            n = n / 10;

        }

        return rev == original;

        
 }

int main()
{
    int x;
    cin >> x;
    bool r = isPalindrome(x);
    cout << (r ? "true" : "false");  
    
    return 0;
}
