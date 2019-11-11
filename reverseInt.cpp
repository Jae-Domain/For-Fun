#include <iostream>
#include <cmath>

using namespace std;

int reverse(int x) {
        
        double answer = 0;
        do
        {
            answer = answer * 10 + x % 10;
            if ((answer > pow(2, 31) + 1) || (answer < pow(-2, 31))) //answer > INT_MAX || answer < INT_MIN
                return 0;
        }while (x /= 10);
        
        return answer;
    }

int main()
{
    int x;
    do {
      cout << "Enter an integer: " << endl;
      cin >> x;
      cout << reverse(x) << endl;
    } while (reverse(x));

    cout << "Invalid Input: Program Terminated" << endl; //terminates at overflow, outputs 0
    
    return 0;
}
