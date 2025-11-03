
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string veri;
    ofstream dosya("dosya.txt");

    if (!dosya) {
        cout << "Dosya açılamadı!" << endl;
        return 1;
    }

    
    getline(cin, veri); 

    dosya << veri << endl; 

    dosya.close(); 
    cout << "Yazma başarılı" << endl;

    return 0;
}
