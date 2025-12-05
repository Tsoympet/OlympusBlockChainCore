#include "key.h"

namespace parthenon {

Key::Key() {}

Key Key::generate() {
    Key k;
    // TODO: real ECDSA key generation
    k.privateKey = "PRIVKEY_PLACEHOLDER";
    k.publicKey  = "PUBKEY_PLACEHOLDER";
    return k;
}

}
