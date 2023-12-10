# Şifreleme Uygulaması

Bu program, belirtilen bir anahtarla metni şifreleyen ve aynı anahtarla şifrelenmiş metni çözen basit bir şifreleme ve şifre çözme uygulamasıdır.

## Kullanım

Program iki şekilde çalışma sunar: şifreleme ve şifre çözme.

### Şifreleme

#### `encryptedChar` Fonksiyonu
- `char encryptedChar(char c, int key)` fonksiyonu, belirtilen anahtara göre bir metni şifrelemek için kullanılır.
- `c`: Şifrelenecek karakter.
- `key`: Şifreleme anahtarı.
- Şifreleme işlemi sadece alfabetik karakterler üzerinde gerçekleşir; diğer karakterler aynı kalır.
- Metin, şifrelemeden önce küçük harflere dönüştürülür.

#### Şifreleme Süreci
- `main` fonksiyonunda, bir metin belirlenir ve bir anahtar değeri atanır.
- `willEncryptedMessage` değişkeni belirtilen anahtarla şifrelenir ve sonuç ekrana yazdırılır.

### Şifre Çözme

#### `decryptedChar` Fonksiyonu
- `char decryptedChar(char c, int key)` fonksiyonu, belirtilen anahtara göre şifrelenmiş bir metni çözmek için kullanılır.
- `c`: Şifrelenmiş karakter.
- `key`: Şifreleme anahtarı.

#### Şifre Çözme Süreci
- `main` fonksiyonunda, şifrelenmiş bir metin ve şifreleme anahtarı belirlenir.
- `encryptedMessage` değişkeni belirtilen anahtarla çözülerek sonuç ekrana yazdırılır.

## Nasıl Kullanılır?

Programı çalıştırmak için:

1. **Şifreleme**
    - Şifrelenecek metni ve bir anahtar değerini `willEncryptedMessage` değişkenine atayın.
    - Programı çalıştırın ve şifrelenmiş metni alın.

2. **Şifre Çözme**
    - Şifrelenmiş metni ve doğru şifreleme anahtarını `encryptedMessage` değişkenine atayın.
    - Programı çalıştırın ve çözülmüş metni alın.

