#ifndef VIGENERE_H_INCLUDED
#define VIGENERE_H_INCLUDED
void vigenereEnc(const char * text, const char * key, char * ciphertext);
void vigenereDec(const char * ciphertext, const char * key, char * text);
#endif // VIGENERE_H_INCLUDED
