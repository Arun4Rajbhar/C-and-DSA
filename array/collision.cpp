#include <iostream>
#include <vector>

class LinearProbingHashTable {
private:
    std::vector<int> table;
    int size;

public:
    LinearProbingHashTable(int tableSize) : size(tableSize), table(tableSize, -1) {}

    // Hash function using modulo division
    int hashFunction(int key) {
        return key % size;
    }

    // Insert a key using linear probing
    void insert(int key) {
        int index = hashFunction(key);

        while (table[index] != -1) {
            // Collision occurred, move to the next index linearly
            index = (index + 1) % size;
        }

        // Insert the key at the found index
        table[index] = key;
    }

    // Display the hash table
    void display() {
        for (int i = 0; i < size; ++i) {
            std::cout << "[" << i << "]: ";
            if (table[i] != -1) {
                std::cout << table[i];
            }
            std::cout << std::endl;
        }
    }

    // Count the number of collisions
    int countCollisions() {
        int collisions = 0;

        for (int i = 0; i < size; ++i) {
            if (table[i] == -1) {
                int j = (i + 1) % size;

                // Check if linear probing occurred
                while (j != i && table[j] != -1) {
                    collisions++;
                    j = (j + 1) % size;
                }
            }
        }

        return collisions;
    }
};

int main() {
    const int tableSize = 19;
    LinearProbingHashTable hashTable(tableSize);

    // Keys to be inserted
    std::vector<int> keys = {224562, 137456, 214562, 140145, 214576, 162145, 144467, 199645, 234534};

    // Insert keys into the hash table
    for (int key : keys) {
        hashTable.insert(key);
    }

    // Display the hash table
    hashTable.display();

    // Count the number of collisions
    int collisions = hashTable.countCollisions();
    std::cout << "Number of collisions: " << collisions << std::endl;

    return 0;
}
