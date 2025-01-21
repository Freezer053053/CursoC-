#include <windows.h>

const COLORREF RED = RGB(255, 0, 0);
const COLORREF BLUE = RGB(0, 0, 255);
COLORREF bgColor = RED;

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            
            HBRUSH hBrush = CreateSolidBrush(bgColor);
            FillRect(hdc, &ps.rcPaint, hBrush);
            DeleteObject(hBrush);
            
            EndPaint(hwnd, &ps);
            break;
        }
        case WM_COMMAND: {
            switch (LOWORD(wParam)) {
                case 1:
                    bgColor = RED;
                    InvalidateRect(hwnd, NULL, TRUE);
                    break;
                case 2:
                    bgColor = BLUE;
                    InvalidateRect(hwnd, NULL, TRUE);
                    break;
            }
            break;
        }
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
