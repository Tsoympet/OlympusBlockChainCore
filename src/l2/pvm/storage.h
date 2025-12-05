#ifndef PARTHENON_STORAGE_H
#define PARTHENON_STORAGE_H

#include <string>
#include <unordered_map>

namespace parthenon {

class Storage {
public:
    std::unordered_map<std::string, std::string> kv;

    std::string read(const std::string& key) const;
    void write(const std::string& key, const std::string& value);
};

}

#endif
