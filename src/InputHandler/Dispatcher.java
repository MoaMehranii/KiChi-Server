package InputHandler;

import Commands.Command;
import Commands.CommandRegistry;

public class Dispatcher {
    private final CommandRegistry registry;
    public Dispatcher(CommandRegistry commandLines){
        this.registry = commandLines;
    }
    //Queue<Command> commandsQueue = new PriorityQueue<>();
    public void dispatch(Storage.Storage storage , ParsedArgument parsedArgument){
        Command currentCommand = registry.getCommand( parsedArgument.Command() );
        if(currentCommand == null)
            throw new IllegalArgumentException("there is no command as: " + parsedArgument.Command());

        else{
            currentCommand.execute( storage, parsedArgument.Arguments());
        }
    }

}
