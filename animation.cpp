// #include <iostream>
// #include <thread>
// #include <chrono>

// int main() {
//     const int width = 50; // Width of the terminal line
//     for (int i = 0; i < width; ++i) {
//         // Clear screen (for Unix/macOS, use ANSI escape codes)
//         std::cout << "\033[2J\033[1;1H"; // Clear screen and move cursor to top-left

//         // Print spaces to move the dot
//         for (int j = 0; j < i; ++j) std::cout << " ";
//         std::cout << "●" << std::endl;

//         // Sleep for 50 milliseconds
//         std::this_thread::sleep_for(std::chrono::milliseconds(50));
//     }

//     return 0;
// }


#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <cstdlib> // For rand()

// Function to print one frame of bar graph
void printGraph(const std::vector<int>& values) {
    std::cout << "\033[2J\033[1;1H"; // Clear screen

    const std::vector<char> labels = {'A', 'B', 'C', 'D'};
    for (int i = 0; i < values.size(); ++i) {
        std::cout << labels[i] << ": ";
        for (int j = 0; j < values[i]; ++j) {
            std::cout << "█";
        }
        std::cout << " (" << values[i] << ")" << std::endl;
    }
}

int main() {
    std::vector<int> values = {5, 10, 7, 3};

    for (int frame = 0; frame < 30; ++frame) {
        // Randomly increase or decrease each value for animation
        for (int i = 0; i < values.size(); ++i) {
            int change = (rand() % 3) - 1; // -1, 0, or +1
            values[i] += change;

            // Clamp values between 0 and 20
            if (values[i] < 0) values[i] = 0;
            if (values[i] > 20) values[i] = 20;
        }

        printGraph(values);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    return 0;
}



// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <cmath>
// #include <ctime>
// #include <chrono>
// #include <thread>

// void printBars(const std::vector<int>& values) {
//     const std::vector<char> labels = {'A', 'B', 'C', 'D'};
//     for (int i = 0; i < values.size(); ++i) {
//         std::cout << labels[i] << ": ";
//         for (int j = 0; j < values[i]; ++j)
//             std::cout << "█";
//         std::cout << " (" << values[i] << ")" << std::endl;
//     }
// }

// void printClock() {
//     const int size = 13;
//     const int center = size / 2;
//     char clock[size][size];

//     for (int y = 0; y < size; ++y)
//         for (int x = 0; x < size; ++x)
//             clock[y][x] = ' ';

//     for (int i = 0; i < 12; ++i) {
//         double angle = i * M_PI / 6;
//         int x = center + static_cast<int>(round((center - 1) * sin(angle)));
//         int y = center - static_cast<int>(round((center - 1) * cos(angle)));
//         clock[y][x] = '*';
//     }

//     time_t now = time(0);
//     tm *ltm = localtime(&now);
//     int hour = ltm->tm_hour % 12;
//     int min = ltm->tm_min;

//     double h_angle = (hour + min / 60.0) * M_PI / 6;
//     int hx = center + static_cast<int>(round((center - 3) * sin(h_angle)));
//     int hy = center - static_cast<int>(round((center - 3) * cos(h_angle)));

//     double m_angle = min * M_PI / 30;
//     int mx = center + static_cast<int>(round((center - 2) * sin(m_angle)));
//     int my = center - static_cast<int>(round((center - 2) * cos(m_angle)));

//     clock[hy][hx] = 'H';
//     clock[my][mx] = 'M';
//     clock[center][center] = 'O';

//     for (int y = 0; y < size; ++y) {
//         for (int x = 0; x < size; ++x)
//             std::cout << clock[y][x];
//         std::cout << std::endl;
//     }

//     printf("Time: %02d:%02d\n", ltm->tm_hour, ltm->tm_min);
// }

// int main() {
//     std::vector<int> values = {5, 10, 7, 3};

//     while (true) {
//         // Random updates to simulate animation
//         for (int i = 0; i < values.size(); ++i) {
//             int delta = (rand() % 3) - 1;
//             values[i] += delta;
//             if (values[i] < 0) values[i] = 0;
//             if (values[i] > 20) values[i] = 20;
//         }

//         // Clear previous output and move cursor to top
//         std::cout << "\033[2J\033[H";

//         std::cout << "📊 Real-Time Bar Chart:\n";
//         printBars(values);

//         std::cout << "\n🕒 Clock:\n";
//         printClock();

//         std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//     }

//     return 0;
// }
