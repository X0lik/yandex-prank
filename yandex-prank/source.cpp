#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    // ��� ������ ����� ������� '//' ����� ������ ��� ������� � ��������� �� � ������ �������
    // To select a language remove the '//' in front of the function you need and put them in another function

    // RUS
    //MessageBox(GetActiveWindow(), L"yandex.exe ��������� ���� ������ ��-�� �������������� ������. ����������, ������������� ���������!", L"������!", MB_ICONERROR);

    // ENG
    MessageBox(GetActiveWindow(), L"yandex.exe has stopped working due to an unexpected error. Please restart your computer!", L"Error!", MB_ICONERROR);
}