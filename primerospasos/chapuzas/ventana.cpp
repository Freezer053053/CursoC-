#include <windows.h>
#include <SDL.h>

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Inicializa SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_Log("No se pudo inicializar SDL: %s", SDL_GetError());
        return 1;
    }

    // Crea la ventana
    SDL_Window* window = SDL_CreateWindow("Ventana Vacía",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          800, 600,
                                          SDL_WINDOW_SHOWN);
    if (!window) {
        SDL_Log("No se pudo crear la ventana: %s", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Espera a que se cierre la ventana
    bool running = true;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }
    }

    // Destruye la ventana y cierra SDL
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
