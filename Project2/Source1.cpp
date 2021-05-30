#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
int readFile()
{
	setlocale(LC_CTYPE, "rus");
	ifstream inf("C:\\hash.txt");
	if (!inf)
	{
		cerr << "Файл ненайден!" << endl;
		exit(1);
	}
	return 0;
}
//#include <C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\des.h>
#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\cryptlib.h"
#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\sha.h"
#include "C:\Users\Артем\Downloads\cryptopp-CRYPTOPP_8_5_0\files.h"
#include "crypto.h"

int main(int argc, char* argv[])
{

	using namespace CryptoPP;
	HexEncoder encoder(new FileSink("C:\\hash.txt", true ));


	std::string inf;
	std::string digest;
	inf = readFile();

	CryptoPP::SHA1 obj;
	obj.Update((const byte*)inf.data(), inf.size());
	digest.resize(obj.DigestSize());
	obj.Final((byte*)&digest[0]);

	std::cout << "Сообщение: " << std::hex << inf << std::endl;

	std::cout << "Digest: ";
	StringSource(digest, true, new Redirector(encoder));
	std::cout << std::endl;

}