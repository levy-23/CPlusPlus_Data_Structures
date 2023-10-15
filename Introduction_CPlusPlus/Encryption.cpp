#include <iostream>

using namespace std;

int main()
{
    string og,shifted,encrypt;
    shifted = "";
    int shift;
    cout << "Enter a phrase: ";
    getline(cin,og);
    cout << "Would you like to (e)ncrypt or (d)ecrypt? ";
    cin >> encrypt;
    cout << "How much would you like to shift (1-26)? ";
    cin >> shift;
    if(encrypt == "e"){
        for(int i =0; i < og.length(); i++){
            int c = (int)toupper(og[i])+shift;
            if(c > 90){
                c = c-90 + 64;
            }
            shifted += (char)c;
        }
        cout << "You encrypted word is: " << shifted;
    }else{
        for(int i =0; i < og.length(); i++){
            int c = (int)toupper(og[i])-shift;
            if(c < 65){
                c = 91 - (65-c);
            }
            shifted += (char)c;
        }
        cout << "You decrypted word is: " <<shifted;
    }
    
    
    
    return 0;
}