#include "storage.h"

namespace parthenon {

std::string Storage::read(const std::string& key) const {
    auto it = kv.find(key);
    if (it == kv.end()) return "0";
    return it->second;
}

void Storage::write(const std::string& key, const std::string& value) {
    kv[key] = value;
}

}
