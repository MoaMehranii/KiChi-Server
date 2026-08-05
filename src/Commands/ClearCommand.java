package Commands;

import Storage.KeyValueStore;
import Storage.Storage;

public class ClearCommand implements Command {
    @Override
    public Object execute(Storage store, String[] CommandArgs) {
        store.clear();
        return null;
    }

}
