package Commands;
import Storage.KeyValueStore;
import Storage.Storage;

public class PutCommand implements Command {

    @Override
    public Object execute(Storage store, String[] CommandArgs) {
        store.put(CommandArgs[0], CommandArgs[1]);
        return null;
    }
}