#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    

    if (n <= 0) {
        cout << "Number of elements should be greater than zero." << endl;

    }
    
    double numbers[n];
    

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    

    double biggest = numeric_limits<double>::lowest();
    double smallest = numeric_limits<double>::max();
    
    
    for (int i = 0; i < n; i++) {
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    
    
    cout << "The biggest number is: " << biggest << endl;
    cout << "The smallest number is: " << smallest << endl;
    
    return 0; 
}
