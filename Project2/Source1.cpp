#include <vector>
#include <iostream>
#include <string>
#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\files.h"
#include "crypto.h"
#include <fstream>
using namespace std;
int main()
{
    using namespace CryptoPP;

    SHA1 obj;

    cout << "Имя: " << obj.AlgorithmName() << endl;
    cout << "Размер хэша:" << obj.DigestSize() << endl;
    cout << "Размер блока:" << obj.BlockSize() << endl;
    fstream file;
    string inf = "C:\\hash.txt";
    string cont;
    file.open(inf);
    if (!file.is_open())
    {
        cout << "Файл ненайден!" << endl;
        return 1;
    }
    cout << "Содержимое файла: " << cont << endl;

    vector<byte> digest(obj.DigestSize());

    obj.Update(reinterpret_cast <const byte*> (cont.data()), cont.size());
    obj.Final(digest.data());

    cout << "Хэш: ";
    CryptoPP::StringSource(digest.data(), digest.size(), true, new  CryptoPP::HexEncoder(new FileSink(cout)));
    cout << endl;
    return 0;
}
