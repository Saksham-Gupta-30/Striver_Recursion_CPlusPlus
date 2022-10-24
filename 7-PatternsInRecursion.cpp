#include <bits/stdc++.h>
using namespace std;

// Printing Subsequences Whose Sum Is K.
// void printS(int index, vector<int> &ds, int s, int sum, int arr[], int n) {
//     if (index == n) {
//         if (s == sum) {
//             for (auto it: ds) cout << it << " ";
//             cout << "\n";
//         }
//         return;
//     }
    
//    // Pick
//     ds.push_back(arr[index]);
//     s += arr[index];
    
//     printS(index + 1, ds, s, sum, arr, n);
    
//     ds.pop_back();
//     s -= arr[index];
    
//     // Not Pick
//     printS(index + 1, ds, s, sum, arr, n);
// }

// int main() {
//     int arr[] = {1, 2, 1};
//     int n = 3, sum = 2;
//     vector<int> ds;
//     printS(0, ds, 0, sum, arr, n);
//     return 0;
// }



// Print Subsequence Whose Sum Is sum (First Subsequence)
// bool printS(int index, vector<int> &ds, int s, int sum, int arr[], int n) {
//     if (index == n) {
//         // If Condition is satisfied
//         if (s == sum) {
//             for (auto it: ds) cout << it << " ";
//             cout << endl;
//             return true;
//         }
//         // Condition Not Satisfied
//         else return false;
//     }
    
//     // Pick
//     ds.push_back(arr[index]);
//     s += arr[index];
    
//     if (printS(index + 1, ds, s, sum, arr, n) == true) return true;
    
//     s -= arr[index];
//     ds.pop_back();
    
//     // Not Pick
//     if (printS(index + 1, ds, s, sum, arr, n) == true) return true;
    
//     return false;
// }

// int main() {
//     int arr[] = {1, 2, 1};
//     int n = 3;
//     int sum = 2;
//     vector<int> ds;
//     printS(0, ds, 0, sum, arr, n);
//     return 0;
// }



// Count the Subsequences whose sum is K
int printS(int index, int s, int sum, int arr[], int n) {
    if (index == n) {
        // Condition Satisfied
        if (s == sum) return 1;
        
        // Condition Not Satisfied
        else return 0;
    }
    
    // Pick
    s += arr[index];
    
    int l = printS(index + 1, s, sum, arr,n);
    
    s -= arr[index];
    
    // Not Pick
    int r = printS(index + 1, s, sum, arr, n);
    
    return r + l;
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3, sum = 2;
    cout << printS(0, 0, sum, arr, n) << endl;
    return 0;
}