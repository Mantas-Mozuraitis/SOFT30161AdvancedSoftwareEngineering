#include "dictionary.h"
#include <chrono>

int main() {
    Dictionary* dict = new Dictionary;
    Dictionary dictionary;



    // Insert 100 entries into the dictionary
    for (int i = 0; i < 4000; i++) {
        dictionary.insert(i, "data_" + std::to_string(i));
    }

    // Start the clock
    auto start_time = std::chrono::high_resolution_clock::now();

    delete dict;

    // Stop the clock
    auto end_time = std::chrono::high_resolution_clock::now();

    // Calculate the duration
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

    // Output the result
    std::cout << "Time taken to insert 1000 nodes: " << duration.count() << " microseconds" << std::endl;

    return 0;
}