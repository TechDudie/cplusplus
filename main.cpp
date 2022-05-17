#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleTitle("BRUH");
    std::string color[4] = {"Blue", "Red", "Orange", "Yellow"};
    cout << "Hello world!" << endl;
    Sleep(5000);
    cout << "BOO!" << endl;
    for (int i = 0; i < 4; i++) {
        std::cout << color[i] << "\n";
	}
    return 0;
}
