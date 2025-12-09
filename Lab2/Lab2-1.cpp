#include <iostream> 
#include <string>  
using namespace std;

int main() {
    char a[6] = {'a', 'b', 'c', 'd', 'e', 'f'}; 
    char b[6] = {'A', 'B', 'C', 'D', 'E', 'F'}; 
    
    string mess = "AbbeF"; 
    for (int i = 0; i < mess.length(); i++) {
        cout << mess[i] << " "; 
    }
    cout << (int)'Z' << endl; 
    return 0; 
}