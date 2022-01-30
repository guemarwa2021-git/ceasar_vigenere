#include "ceasar.h"
#include <string.h>
#include <ctype.h>

void caesarEnc(const char * message, short key, char * ciphertext){
    unsigned int i = 0;
    short rang;
    while( message[i] != '\0'){
        if( ( message[i] >= 'a') && (message[i] <= 'z') ){
            rang = (message[i] - 'a' + key) % 26;
            if( rang < 0) rang += 26;
            ciphertext[i] = 'a' + rang;
        }
        else if(( message[i] >= 'A') && (message[i] <= 'Z')){
            rang = (message[i] - 'A' + key) % 26;
            if( rang < 0) rang += 26;
            ciphertext[i] = 'A' + rang;
        }
        else {
            ciphertext[i] = message[i];
        }
        i++;
    }
    ciphertext[i] = '\0';
}

void caesarDec(const char * ciphertext, short key, char * plaintext){
    caesarEnc(ciphertext, -key, plaintext);
}
