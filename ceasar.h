#ifndef CEASAR_H_INCLUDED
#define CEASAR_H_INCLUDED
void caesarEnc(const char * message, short key, char * ciphertext);
void caesarDec(const char * ciphertext, short key, char * plaintext);
#endif // CEASAR_H_INCLUDED
