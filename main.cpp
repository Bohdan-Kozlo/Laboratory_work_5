#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main() {
	Folder1 folder1("folder1");
	Folder1::Folder2 folder2("folder2");
	Folder1::Folder2::File file("file1", "pdf", 3);
	folder1.showPath(folder1, folder2, file);

}


