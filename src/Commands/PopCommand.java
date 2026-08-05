package Commands;

import Storage.KeyValueStore;
import Storage.Storage;

public class PopCommand implements Command {
    @Override
    public Object execute(Storage store, String[] CommandArgs) {
        store.pop(CommandArgs[0]);
        return null;
    }
}
