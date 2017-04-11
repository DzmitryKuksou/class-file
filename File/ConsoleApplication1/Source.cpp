#include <iostream>
#include"string.h"
#include "File.h"
void File::SetFile(char* name, char* data, int size, int thenumofreqwest)
{
	SetName(name);
	SetDate(data);
	SetTheSize(size);
	SettheNumOfReqwest(thenumofreqwest);
}
void File::SetName(char* Name)
{
	strcpy(name, Name);
}
void File::SettheNumOfReqwest(int thenumofreqwest)
{
	theNumOfReqwest = thenumofreqwest;
}
void File:: SetDate(char* data)
{
	strcpy(date, data);
}
void File:: SetTheSize(int size)
{
	the_size = size;
}
char* File::GetName()
{
	return name;
}
char* File:: GetDate()
{
	return date;
}
int File::GetTheSize()
{
	return the_size;
}
int File::GettheNumOfReqwest()
{
	return theNumOfReqwest;
}
void File::DisplayFile()
{
	cout << "Name:" << name << endl;
	cout << "Realyse:" << date << endl;
	cout << "the size:" << the_size << endl;
	cout << "the num of reqwest:" << theNumOfReqwest << endl;
	cout << "--------------------\n";
}
File::File()
{
}
File::~File()
{

}
