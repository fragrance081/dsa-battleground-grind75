#include <bits/stdc++.h>
using namespace std;
// Function to add two numbers
int addTwoNumbers(int a, int b) {
    return a + b;
}
// Main function
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Call the function to add the two numbers
    int sum = addTwoNumbers(num1, num2);
    
    // Print the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    
    return 0;
}