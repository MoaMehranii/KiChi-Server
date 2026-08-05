package Commands;

import Storage.KeyValueStore;
import Storage.Storage;

public class RemoveCommand implements Command {
    @Override
    public Object execute(Storage store, String[] CommandArgs) {

        store.remove(CommandArgs[0]);
        return null;
    }
}
