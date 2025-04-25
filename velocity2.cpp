#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

// Function to find the position of letters in the alphabet and return as a list
vector<int> findLetterPosition(const string& str) {
    vector<int> positions;
    for (char ch : str) {
        if (isalpha(ch)) {
            positions.push_back(ch & 31); // Get letter position (1-26)
        } else {
            positions.push_back(0); // Push 0 for non-alphabetic characters
        }
    }
    return positions;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int p, q, m, n;

    // Input validation for prime numbers
    do {
        cout << "Enter a prime number (p): ";
        cin >> p;
    } while (!isPrime(p));

    do {
        cout << "Enter another prime number (q): ";
        cin >> q;
    } while (!isPrime(q));

    do {
        cout << "Enter another prime number (m): ";
        cin >> m;
    } while (!isPrime(m));

    do {
        cout << "Enter another prime number (n): ";
        cin >> n;
    } while (!isPrime(n));

    // Mathematical calculations
    float productPM = p * m;
    float productQN = q * n;
    float sumProducts = productPM + productQN;
    float productMN = m * n;
    float productNP = n * p;
    float productPQ = p * q;

    // Avoid division by zero
    if (productPQ == 0) {
        cerr << "Error: Division by zero in intermediate calculations." << endl;
        return 1;
    }

    float ratioNP_PQ = productNP / productPQ;
    float sumAll = productMN + ratioNP_PQ;

    if (sumAll == 0) {
        cerr << "Error: Division by zero in final calculation." << endl;
        return 1;
    }

    float finalValue = sumProducts / sumAll;
    cout << "Final Value (fv): " << finalValue << endl;

    // Encrypt user input
    string inputText;
    cout << "Enter text to be encrypted: ";
    cin >> inputText;

 vector<int> positions = findLetterPosition(inputText);

    // Print the positions
    cout << "Letter positions: ";
    for (int pos : positions) {
        cout << pos << " ";
    }
    cout << endl;
    
 
    return 0;
}
