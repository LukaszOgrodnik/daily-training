#include <iostream>
#include <string>


std::string caesarCipher(std::string message, int change){
    std::string encrypted_message = message;
    change = change%26;
    for (int i=0; i<message.length(); i++){
        if (message[i]>=65 && message[i]<=90){
            if (message[i]+change <= 90)
            encrypted_message[i] = message[i]+change;
            else
            encrypted_message[i] = (message[i]+change)%90+64;
        }
        if (message[i]>=97 && message[i]<=122){
            if (message[i]+change <=122)
            encrypted_message[i] = message[i]+change; 
            else
            encrypted_message[i] = (message[i]+change)%122+96;
        }
        int x = message[i];
        int y = encrypted_message[i];
    } 
    return encrypted_message;
};
int main() {
    std::cout << caesarCipher("Always-Look-on-the-Bright-Side-of-Life",26)<< std::endl; 
    return 0;
}