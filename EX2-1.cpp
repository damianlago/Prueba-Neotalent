#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "Este es un TEXTO de prueba.";

    int len = s.length();

    for (int i=0; i<=len; i++) {
        cout << s[len-i];
    }
   
    return 0;
}