package Commands;

import java.util.HashMap;
import java.util.Map;

public class CommandRegistry {
    private final Map<String , Command> registerymap = new HashMap<>();
    public void execute(String CommandWord){
        registerymap.get(CommandWord);
    }
    public CommandRegistry(){
        registerymap.put("PUT" , new PutCommand());
        registerymap.put("GET" , new GetCommand());
        registerymap.put("CLEAR" , new ClearCommand());
        registerymap.put("EXISTS" , new ContainsCommand());
        registerymap.put("REMOVE" , new RemoveCommand());
        registerymap.put("MAP_SIZE" , new SizeCommand());
        registerymap.put("POP" , new PopCommand());
        registerymap.put("IS_EMPTY" , new IsEmptyCommand());


    }
    public Command getCommand(String key){
        return registerymap.get(key);
    }
    public boolean contains(String key){
        if (registerymap.containsKey(key)){
            return true;
        }
        return false;
    }


}
