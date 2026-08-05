package Commands;

import Storage.KeyValueStore;
import Storage.Storage;

public class GetCommand implements Command {
    @Override
    public String execute(Storage store, String[] CommandArgs) {
        if(CommandArgs.length != 1)
            throw new IllegalArgumentException(
                    "GET requires one argument");
        return store.get(CommandArgs[0]);

    }
}
