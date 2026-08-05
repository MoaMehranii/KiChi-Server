package Commands;

import Storage.KeyValueStore;
import Storage.Storage;

public interface Command {
    Object execute(Storage store, String[] args);
}
