#include <iostream>

int main(int argc, char** argv)
{
std::cout << "Using " 
		  << (argc > 1 ? argv[1] : argv[0]) 
          << std::endl;
return 0;
}

