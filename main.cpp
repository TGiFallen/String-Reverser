#include <iostream>
#include <string>


std::string reverse(char* inp)
{
	std::string retval;
	int len = strlen(inp);

	for (int a = len; a >= 0; a--)
	{
		retval += inp[a];
	}

	return retval;
}

int main( int count , char* arguments[] )
{

	for (int i = 0; i < count; i++)
	{
		std::cout << arguments[i] << "\t" << strlen(arguments[i]) << "\t" << reverse(arguments[i]) << std::endl;
	}
	return 0;
}