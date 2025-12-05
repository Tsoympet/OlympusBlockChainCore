#include "keyring.h"
#include "crypto/key.h"

namespace parthenon {

Keyring::Keyring() : privateKey(""), publicKey("") {}

bool Keyring::generate() {
    Key k = Key::generate();
    privateKey = k.privateKey;
    publicKey = k.publicKey;
    return true;
}

}
