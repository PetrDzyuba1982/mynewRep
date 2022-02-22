#include <iostream>
#include "Modul.h"
using namespace std;
int main(int argc, char* argv[])
{ 
	if (argc < 1) cout << "Vvedite imia fila"; else 
	for(int i = 1;i<argc;i++)
    cout << argv[i] << " ";
	return 1000;
}
