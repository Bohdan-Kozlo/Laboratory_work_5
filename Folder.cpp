#include "Folder.h"

Folder1::Folder1()
{
	this->name_folder1 = "New Folder";
}

Folder1::Folder1(string name)
{
	this->name_folder1 = name;
}

string Folder1::get_name()
{
	return name_folder1;
}

Folder1::Folder2::Folder2()
{
	this->name_folder2 = "New Folder2";
}

Folder1::Folder2::Folder2(string name)
{
	this->name_folder2 = name;
}

string Folder1::Folder2::get_name()
{
	return name_folder2;
}

Folder1::Folder2::File::File()
{
	this->name_file = "New File";
	this->extension_file = "pdf";
	this->size_file = 5;
}

Folder1::Folder2::File::File(string name, string extension, int size)
{
	this->name_file = name;
	this->extension_file = extension;
	this->size_file = size;
}

string Folder1::Folder2::File::get_name()
{
	return name_file;
}

string Folder1::Folder2::File::get_extension()
{
	return extension_file;
}

int Folder1::Folder2::File::get_size()
{
	return size_file;
}
void Folder1::showPath(Folder1 folder1, Folder1::Folder2 folder2, Folder1::Folder2::File file) {
	cout << "Path:" << folder1.get_name() << "/" << folder2.get_name() << "/" << file.get_name() << endl;
}
