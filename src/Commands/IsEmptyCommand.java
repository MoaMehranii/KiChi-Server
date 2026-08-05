package Commands;

import Storage.KeyValueStore;
import Storage.Storage;

public class IsEmptyCommand implements Command{
    @Override
    public Boolean execute(Storage store, String[] CommandArgs) {
        return store.isEmpty();
    }
}
