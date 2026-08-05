package Commands;

import Storage.KeyValueStore;
import Storage.Storage;

public class ContainsCommand implements Command{
    @Override
    public Boolean execute(Storage store, String[] CommandArgs) {
        return store.contains(CommandArgs[0]);
    }
}
