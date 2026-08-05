package Commands;

import Storage.KeyValueStore;
import Storage.Storage;

public class SizeCommand implements Command{
    @Override
    public Integer execute(Storage store, String[] CommandArgs) {
        return store.size();
    }
}
