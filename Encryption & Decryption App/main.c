//
//  main.c
//  Encryption App
//
//  Created by Mete Turan on 10.12.2023.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char encryptedChar(char c, int key)  // Belirlenen anahtara (key) göre istenilen metine şifreleme yapan fonksiyon.
{
    
    char d;
    
    if (isalpha(c)) {               // Eğer karakter bir harf ise döngü çalışır.
        
        d = tolower(c);             // Harfi küçük harfe dönüştürür.
        
        d -= 'a';                   // Harfin alfabedeki sırasını bulabilmek için harfin ASCII değerinden a'nın ASCII değerini çıkartır.
        
        d += key;                   // Harfin ASCII değerine şifreleme anahtarı eklenir.
        
        d %= 26;                    // Harfin alfabedeki sırası bulunur.
        
        d += 'a';                   // Harfi tekrar orijinal haline getirir.
    }

    return d;
}

char decryptedChar(char c, int key)
{
    char d;
    
    if (isalpha(c)) {
        d = tolower(c);
        
        d -= 'a';
        d -= key;                   // Encrypted'ten farklı olarak decryptation yaptığımız için anahtar değerini ifadenin ASCII değerinden çıkarıyoruz.
        
        while (d < 0)
        {
            d += 26;
        }
        
        d %= 26;
        d += 'a';
    }
    
    return d;
}


int main(int argc, const char * argv[]) {
    
    printf("----- Welcome To Encryption Application ----\n\n");
    
    
    char willEncryptedMessage[] = "The quick brown fox";
    
    int key = 2;
    
    printf("Decrypted Message: %s\n", willEncryptedMessage);
    
    for (int i = 0; i < strlen(willEncryptedMessage); i++)
    {
        if (!isspace(willEncryptedMessage[i]))                  //Boşlukların yerine herhangi bir harf ataması yapılmaması için kullanılır.
        {
            willEncryptedMessage[i] = encryptedChar(willEncryptedMessage[i], key);
        }
    }
    
    printf("Encrypted Message: %s\n", willEncryptedMessage);
    
    
    // -------------------------------- //
   
    
    printf("\n----- Welcome To Decryption Application ----\n\n");

    char encryptedMessage[] = "Vjg swkem dtqyp hqz";

    int decryptionKey = 2;

    printf("Encrypted Message: %s\n", encryptedMessage);

    for (int i = 0; i < strlen(encryptedMessage); i++) {
        if (!isspace(encryptedMessage[i])) {
            encryptedMessage[i] = decryptedChar(encryptedMessage[i], decryptionKey);
        }
    }

    printf("Decrypted Message: %s\n", encryptedMessage);
    
    return 0;
}
