#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <extapp_api.h>

extern "C" void extapp_main();

void extapp_main(void) {
    // Initialize display
    extapp_drawTextLarge("Pi Stream Display", 10, 20, 0x0000, 0xFFFF, false);
    extapp_drawTextLarge("Raspberry Pi Streaming", 10, 50, 0x0000, 0xFFFF, false);
    extapp_drawTextLarge("Ready for data...", 10, 80, 0x0000, 0xFFFF, false);
    
    // Wait for user input
    while (true) {
        int key = extapp_getKey(true, NULL);
        if (key == KEY_BACK || key == KEY_HOME) {
            break;
        }
    }
}
