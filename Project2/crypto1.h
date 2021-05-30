
#pragma once
//for generate IV and Key
#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\osrng.h"
//using CryptoPP::AutoSeededRandomPool;

#include <string>
//using std::string;

//for exceptions
#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\cryptlib.h"
//using CryptoPP::Exception;

//for hex viewing
#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\hex.h"
//using CryptoPP::HexDecoder;
//using CryptoPP::HexEncoder;

//converter input into cipher
#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\filters.h"
//using CryptoPP::StringSink;
//using CryptoPP::StreamTransformation;
//using CryptoPP::StreamTransformationFilter;

//add AES
#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\aes.h"
//using CryptoPP::AES;

#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\modes.h"
//using CryptoPP::CBC_Mode;

#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\md5.h"
//using CryptoPP::MD5;

#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\files.h"

#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\des.h"

#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\modes.h"

#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\pwdbased.h"
using namespace std;
using namespace CryptoPP;
class AES_CRYP
{
private:
    string filein;
    string fileout;
    string psw;
    string salt = "Я помню чудное мгновенье";
public:
    AES_CRYP() = delete;
    AES_CRYP(const string& input, const string& output, const string& pass) : filein(input), fileout(output), psw(pass) {};
    bool encrypt();
    bool decrypt();
};

class DES_CRYP
{
private:
    string filein;
    string fileout;
    string psw;
    string salt = "Я помню чудное мгновенье";
public:
    DES_CRYP() = delete;
    DES_CRYP(const string& input, const string& output, const string& pass) : filein(input), fileout(output), psw(pass) {};
    bool encrypt();
    bool decrypt();
};






