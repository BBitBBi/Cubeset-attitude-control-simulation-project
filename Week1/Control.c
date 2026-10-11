#include <stdio.h>
#include <windows.h>

#define SENSOR_PERIOD_MS 10
#define CONTROL_PERIOD_MS 100
#define TICK_MS 1

void sensor_task() {
    printf("Sensor task implemented\n");
}

void control_task() {
    printf("Control task implemented\n");
}

int main() {
    // ULONGLONG start_time = GetTickCount64();
    unsigned long elapsed_ms = 0;

    while(1) {
        Sleep(TICK_MS);
        // ULONGLONG current_time = GetTickCount64();
        // ULONGLONG elapsed_ms = current_time - start_time;

        // printf("%d\n", elapsed_ms);

        if(elapsed_ms % SENSOR_PERIOD_MS == 0) {
            sensor_task();
        }
        if(elapsed_ms % CONTROL_PERIOD_MS == 0) {
            control_task();
        }
        elapsed_ms += TICK_MS;
    }

    return 0;
}