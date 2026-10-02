# KiChi Server - C++ Core

C++20 reimplementation of the supplied Java Core.

Architecture: Parser -> Dispatcher -> CommandRegistry -> Command -> Storage -> KeyValueStore.

Commands: PUT key value, GET key, REMOVE key, POP key, CLEAR, EXISTS key, MAP_SIZE, IS_EMPTY, EXIT.

Build:
```bash
cmake -S . -B build
cmake --build build
./build/kichi_server
```

The networking/JSON layer is intentionally not added yet; the original Receiver was a placeholder.
