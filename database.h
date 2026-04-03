#pragma once

#include <vector>
#include <string>

class Database {
public:
    // Create operations
    void addSeizure(const std::string& seizure);
    void addMedicine(const std::string& medicine);

    // Read operations
    std::vector<std::string> getSeizures() const;
    std::vector<std::string> getMedicines() const;

    // Update operations
    void updateSeizure(int id, const std::string& seizure);
    void updateMedicine(int id, const std::string& medicine);

    // Delete operations
    void deleteSeizure(int id);
    void deleteMedicine(int id);
};