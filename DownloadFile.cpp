#include <iostream>
#define NOMINMAX //define this if using SFML
#include <Windows.h>
//#include <SFML/Graphics.hpp>

#include <urlmon.h> //required for download
#pragma comment(lib, "urlmon.lib")


int main()
{
	const wchar_t* srcURL = L"https://raw.githubusercontent.com/MDS-HugoA/TechLev/main/ImgListSmall.txt";
	const wchar_t* dstFile = L"myFile.txt";

	//NOTE: Depending on your Visual Studio version,
	// you may need to change character set to 'Unicode character set'.
	// Project>Properties>General>Project Defaults>Character Set: 

	if (S_OK == URLDownloadToFile(NULL, srcURL, dstFile, 0, NULL))
	{
		std::cout << "download success\n";
	}
	else
	{
		std::cout << "download failed\n";
	}

	//If download successful, you'll be able to see "myFile.txt" in your project folder and filled out.

	return 0;
}
